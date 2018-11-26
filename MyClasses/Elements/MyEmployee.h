//
// Created by noamc on 23/11/2018.
//

#ifndef EX2_98_MYEMPLOY_H
#define EX2_98_MYEMPLOY_H


#include "MyID.h"

class MyEmployee : public Employee {
    Jobs *_title;
    int _birth_year;
    int _seniority;
    MyID id;
public:
    MyEmployee(
            int seniority,
            int birth_year,
            string employer_id,
            Jobs title);

    void setSeniority(int seniority);

    int getSeniority();

    int getBirthYear();

    Employee *getEmployer();

    Jobs getTitle();

    ~MyEmployee();

    virtual string getID();
};


#endif //EX2_98_MYEMPLOY_H
