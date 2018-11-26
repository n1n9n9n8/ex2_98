//
// Created by noamc on 24/11/2018.
//

#ifndef EX2_98_DATATABLES_H
#define EX2_98_DATATABLES_H

#include <vector>
#include "../Elements.h"

using namespace std;
enum HasID {
};

class DataTables {
    map<MyID, MyEmployee *> employees;
    map<MyID, MyPlane *> planes;
    map<MyID, MyFlight *> flights;
    map<MyID, MyCustomer *> customers;
    map<MyID, MyReservation *> reservations;
    MyID lastID;


public:
    DataTables();

    //get functions

    MyEmployee *getEmployee(MyID id);

    MyPlane *getPlane(MyID id);

    MyFlight *getFlight(MyID id);

    MyCustomer *getCustomer(MyID id);

    MyReservation *getReservation(MyID id);

    //add functions

    void addEmployee(MyEmployee *employee);

    void addPlane(MyPlane *plane);

    void addFlight(MyFlight *flight);

    void addCustomer(MyCustomer *customer);

    void addReservation(MyReservation *reservation);


    // ID

    MyID createID();

private:
    map<MyID, MyEmployee *> *getEmployees();

    map<MyID, MyPlane *> *getPlanes();

    map<MyID, MyFlight *> *getFlights();

    map<MyID, MyCustomer *> *getCustomers();

    map<MyID, MyReservation *> *getReservations();

    const MyID &getLastID() const;


    int stringToInt(string s);

    string intToString(int n);

};


#endif //EX2_98_DATATABLES_H
