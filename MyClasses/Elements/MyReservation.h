//
// Created by noamc on 24/11/2018.
//


#ifndef EX2_98_MYRESERVATION_H
#define EX2_98_MYRESERVATION_H

#include "MyID.h"
#include "MyCustomer.h"
#include "MyFlight.h"

class MyReservation: public MyID, public Reservation {
    MyCustomer* customer;
    MyFlight* flight;
    Classes* classe;
    int max_baggage;




public:
    virtual Customer *getCustomer();

    virtual Flight *getFlight();

    virtual Classes getClass();

    virtual int getMaxBaggage();

    virtual ~MyReservation();

   // MyReservation(string id);

    virtual string getID();
};


#endif //EX2_98_MYRESERVATION_H
