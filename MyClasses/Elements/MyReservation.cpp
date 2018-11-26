//
// Created by noamc on 24/11/2018.
//

#include "MyReservation.h"

Customer *MyReservation::getCustomer() {
    return customer;
}

Flight *MyReservation::getFlight() {
    return flight;
}

Classes MyReservation::getClass() {
    return *classe;
}

int MyReservation::getMaxBaggage() {
    return max_baggage;
}

MyReservation::~MyReservation() {

}

string MyReservation::getID() {
    return MyID::getID();
}
