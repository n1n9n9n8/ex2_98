//
// Created by noamc on 23/11/2018.
//

#include "MyCustomer.h"

string MyCustomer::getFullName() {
    return name;
}

int MyCustomer::getPriority() {
    return priority;
}

list<Reservation *> MyCustomer::getReservations() {
    return reservations;
}

MyCustomer::~MyCustomer() {

}

MyCustomer::MyCustomer(string id) : MyID(id) {

}

string MyCustomer::getID() {
    return MyID::getID();
}
