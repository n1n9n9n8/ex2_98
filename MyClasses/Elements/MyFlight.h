//
// Created by noamc on 23/11/2018.
//

#ifndef EX2_98_MYFLIGHT_H
#define EX2_98_MYFLIGHT_H


#include "MyID.h"


class MyFlight : public MyID, public Flight{
    int model_number;
    list<Reservation *> reservations;
    list <Employee *> assigned_crow;
    Date* date;
    string source;
    string destination;

public:
    virtual int getModelNumber();

    virtual list<Reservation *> getReservations();

    virtual list<Employee *> getAssignedCrew();

    virtual Date getDate();

    virtual string getSource();

    virtual string getDestination();

    virtual ~MyFlight();

    MyFlight(string id);

    virtual string getID();
};


#endif //EX2_98_MYFLIGHT_H
