#pragma once

#include <iostream>
#include <stdio.h>
#include <iomanip>
#include <cstdlib>

// for Json::value
#include <json/json.h>
#include <json/reader.h>
#include <json/writer.h>
#include <json/value.h>
#include <string>

using std::string;

class Parameter{
	public:
		string name;
		virtual Json::Value dump2json();
};

