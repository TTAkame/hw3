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

#include "Person.h"
#include "Thing.h"
#include "Location.h"
#include "Time.h"


class Record {
    public:
        Person pa;
        Person pb;
        Thing ta;
        Thing tb;
        Location lon;
        Time tme;
        Json::Value dump2json();
        void setPerson(Person ps);
        void setPerson(Person p1, Person p2);
        void setThing(Thing tg);
        void setThing(Thing tg,Thing thg);
        void setLocation(Location ln);
        void setTime(Time te);
};

