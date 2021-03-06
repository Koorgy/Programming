#include <iostream>
#include <string>
#include <nlohmann/json.hpp>
#include <cpp_httplib/httplib.h>
using namespace httplib;
using json = nlohmann::json;
using namespace std;
Client cli("http://worldtimeapi.org");

json cache;
Client times("https://api.openweathermap.org");

json get_json() {
    auto res = cli.Get("/data/2.5/onecall?lat=44.95719&lon=34.11079&exclude=hourly&appid=efb20d329caaf24c185748f1042f4a17");
    if (!res) {
        return ("Err");
    }

    int status = res->status;
    if (status < 200 or status >= 300) {
        return ("Err");
    }

    return json::parse(res->body);
}

json get_cache() {
    json cache;
    std::ifstream cachename("cache.json");
    if (cachename.is_open()) {
        string inform;
        getline(cachename, inform, '\0');

        if (!inform.empty()) {
            cache = json::parse(inform);
        }
        cachename.close();
    }

    else {
        return ("Err");
    }
    return cache;
}

bool cachejson(json ca) {
    cache = ca;
    ofstream cachename("cache.json");
    if (cachename.is_open()) {
        cachename << ca.dump(4);
        cachename.close();
    }
    else return false;
    return true;
}

json get_time() {
    auto time = times.Get("/api/timezone/Europe/Simferopol");
    if (!time) {
        return("Err");
        return json::object();
    }
    int status = time->status;
    if (status < 200 or status >= 300) {
        return ("Err");
    }
    return json::parse(time->body);
}

json get_hourly_request(json& hourly) {
    json hourly_request;
    int last = hourly.size() - 1;
    json timenow = get_time();
    int currtime = timenow["unixtime"];
    if (hourly[last]["dt"] <= currtime) {
        return json::object();
    }
    for (int i = 0; i <= last; ++i) {
        if (hourly[i]["dt"] > currtime) {
            hourly_request = hourly[i];
            return hourly_request;
        }
    }
}