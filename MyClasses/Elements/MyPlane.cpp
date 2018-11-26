//
// Created by noamc on 23/11/2018.
//

#include "MyPlane.h"

MyPlane::MyPlane(int model_number, map<Jobs, int> crew_needed, map<Classes, int> max_passangers, string id) : MyID(id) {
    this->_model_number = model_number;
    this->_crew_needed = &crew_needed;
    this->_max_economy_class = max_passangers[SECOND_CLASS];
    this->_max_first_class = max_passangers[FIRST_CLASS];

}

string MyPlane::getID() {
    MyID::getID();
}

int MyPlane::getModelNumber() {
    return _model_number;
}

map<Jobs, int> MyPlane::getCrewNeeded() {
    return *_crew_needed;
}

int MyPlane::getMaxFirstClass() {
    return _max_first_class;
}

int MyPlane::getMaxEconomyClass() {
    return _max_economy_class;
}

MyPlane::~MyPlane() {

}

