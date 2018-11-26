//
// Created by noamc on 23/11/2018.
//

#ifndef EX2_98_MYPLANE_H
#define EX2_98_MYPLANE_H


#include "MyID.h"

class MyPlane : public MyID, public Plane{
    int _model_number;
    map<Jobs , int> *_crew_needed;
    int _max_first_class;
    int _max_economy_class;


public:
    virtual string getID();

    virtual int getModelNumber();

    virtual map<Jobs, int> getCrewNeeded();

    virtual int getMaxFirstClass();

    virtual int getMaxEconomyClass();

    virtual ~MyPlane();

    MyPlane(
            int model_number,
            map<Jobs, int> crew_needed,
            map<Classes, int> max_passangers,
            string id);
};


#endif //EX2_98_MYPLANE_H
