//
// Created by noamc on 24/11/2018.
//

#include <iostream>
#include "DataTables.h"

//SIMBAAAAAAAAAAAAAAAAAA

DataTables::DataTables() : lastID("0") {
}


MyEmployee *DataTables::getEmployee(MyID id) {
    return employees[id];
}

MyPlane *DataTables::getPlane(MyID id) {
    return planes[id];
}

MyFlight *DataTables::getFlight(MyID id) {
    return flights[id];
}

MyCustomer *DataTables::getCustomer(MyID id) {
    return customers[id];
}

MyReservation *DataTables::getReservation(MyID id) {
    return reservations[id];
}

MyID DataTables::createID() {

    return MyID("1");
}


//void DataTables::addEmployee(MyEmployee *employee) {
//    MyID id = employee->getID();
//    (*this->getEmployees())[id] = employee;
//
//}
//
//void DataTables::addPlane(MyPlane *plane) {
//    MyID id = plane->getID();
//    (*this->getPlanes())[id] = plane;
//}
//
//void DataTables::addFlight(MyFlight *flight) {
//    MyID id = flight->getID();
//    (*this->getFlights())[id] = flight;
//}
//
//void DataTables::addCustomer(MyCustomer *customer) {
//    MyID id = customer->getID();
//    (*this->getCustomers())[id] = customer;
//}
//
//void DataTables::addReservation(MyReservation *reservation) {
//    MyID id = reservation->getID();
//    (*this->getReservations())[id] = reservation;
//}
//

int DataTables::stringToInt(string s) {
    int index = 0;
    bool negate = (s[0] == '-');
    if (s[0] == '+' || s[0] == '-')
        ++index;

    int result = 0;
    for (int i = index; i < s.size(); ++i) {
        result = result * 10 - (s[i] - '0');  //assume negative number
    }
    return negate ? result : -result; //-result is positive!
}

string DataTables::intToString(int n) {
    if (n == 0) {
        return "0";
    }
    string result = "";
    while (n != 0) {
        char c = (char) (n % 10 + '0');
        n /= 10;
        result = &c + result;
    }
    return result;


}

map<MyID, MyEmployee *> *DataTables::getEmployees() {
    return &employees;
}

map<MyID, MyPlane *> *DataTables::getPlanes() {
    return &planes;
}

map<MyID, MyFlight *> *DataTables::getFlights() {
    return &flights;
}

map<MyID, MyCustomer *> *DataTables::getCustomers() {
    return &customers;
}

map<MyID, MyReservation *> *DataTables::getReservations() {
    return &reservations;
}

const MyID &DataTables::getLastID() const {
    return lastID;
}
