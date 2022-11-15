#include<iostream>
#include <iostream>
#include <stdio.h>
#include <iomanip>
#include <cstdlib>
#include <json/json.h>
#include <json/reader.h>
#include <json/writer.h>
#include <json/value.h>
#include "Time.h"

using namespace std;

Json::Value Time::dump2json(){
	Json::Value result{};
	result["Description"] = name;
    return result;
}

