//
// Created by noamc on 23/11/2018.
//

#ifndef EX2_98_MYCUSTOMER_H
#define EX2_98_MYCUSTOMER_H


#include "MyID.h"

class MyCustomer : public MyID, public Customer {
    string name;
    int priority;
    list<Reservation *> reservations;


public:
    virtual string getFullName();

    virtual int getPriority();

    virtual list<Reservation *> getReservations();

    virtual ~MyCustomer();

    MyCustomer(string id);

    virtual string getID();
};


#endif //EX2_98_MYCUSTOMER_H
