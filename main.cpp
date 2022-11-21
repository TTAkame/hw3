#include<iostream>
#include<fstream>

#include <stdio.h>
#include <iomanip>
#include <cstdlib>
#include <json/json.h>
#include <json/reader.h>
#include <json/writer.h>
#include <json/value.h>
#include <string.h>

#include "Parameter.h"
#include "Person.h"
#include "Time.h"
#include "Thing.h"
#include "Location.h"
#include "Record.h"

using namespace std;

int main(){

    ofstream output("output.json");
    
    Time one;
    one.name = "8:00";
    
    Time two;
    two.name = "9:00";
    Time three;
    three.name = "10:00";
    Time four;
    four.name = "11:00";
    
    Person red;
    red.name="Little Red";
    Person mom;
    mom.name="Mom";
    Person grandma;
    grandma.name="Grandma";
    Person wolf;
    wolf.name="wolf";
    
    Thing cap;
    cap.name="cap";
    Thing wine;
    wine.name="wine";
    Thing cake;
    cake.name="cake";
    Thing oak;
    oak.name = "oak";

    Location iw;
    iw.name = "a spot in the wood";
    Location ow;
    ow.name = "outside of the wood";
    Location ot;
    ot.name = "nearby three large oak trees";
    
    Location hm;
    hm.name = "home";
    
    //Little Red Ridding Hood wore the Cap
    Record s1;
    s1.setPerson(red);
    s1.setThing(cap);
    s1.setLocation(hm);
    s1.setTime(one);
    
    //Her mom gave her the cake and wine
    Record s2;
    s2.setPerson(red,mom);
    s2.setThing(cake,wine);
    s2.setLocation(hm);
    s2.setTime(two);
    
    //Little Red met the wolf at a particular spot in the wood
    Record s3;
    s3.setPerson(red,wolf);
    s3.setLocation(iw);
    s3.setTime(three);
      
    //Grandma was at her own home right outside of the wood and there were three large oak trees nearby
    Record s4;
    s4.setPerson(grandma);
    s4.setLocation(ot);
    s4.setTime(four);

    // dump
    output << (s1.dump2json()).toStyledString();
    output << (s2.dump2json()).toStyledString();
    output << (s3.dump2json()).toStyledString();
    output << (s4.dump2json()).toStyledString();

    output.close();

    return 0;
}

