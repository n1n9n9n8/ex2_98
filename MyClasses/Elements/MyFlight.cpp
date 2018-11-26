//
// Created by noamc on 23/11/2018.
//

#include "MyFlight.h"

int MyFlight::getModelNumber() {
    return model_number;
}

list<Reservation *> MyFlight::getReservations() {
    return reservations;
}

list<Employee *> MyFlight::getAssignedCrew() {
    return assigned_crow;
}

Date MyFlight::getDate() {
    return *date;
}

string MyFlight::getSource() {
    return source;
}

string MyFlight::getDestination() {
    return destination;
}

MyFlight::~MyFlight() {

}


string MyFlight::getID() {
    return MyID::getID();
}
