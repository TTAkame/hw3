#include <iostream>
#include <stdio.h>
#include <iomanip>
#include <cstdlib>
#include <json/json.h>
#include <json/reader.h>
#include <json/writer.h>
#include <json/value.h>
#include <string>
#include "Parameter.h"

using namespace std;

Json::Value Parameter::dump2json(){
    Json::Value result{};
    result["Description"] = name;
    return result;
}

bool Parameter::JSON2Object(Json::Value) {

    return true;
}

