//
// Created by noamc on 23/11/2018.
//

#include "MyEmployee.h"


MyEmployee::MyEmployee(int seniority, int birth_year, string employer_id, Jobs title) : id(employer_id), Employee(),
                                                                                        _title(&title),
                                                                                        _birth_year(birth_year),
                                                                                        _seniority(seniority) {


}

void MyEmployee::setSeniority(int seniority) {
    _seniority = seniority;
}


int MyEmployee::getSeniority() {
    return _seniority;
}

int MyEmployee::getBirthYear() {
    return _birth_year;
}

Employee *MyEmployee::getEmployer() {
    return this;
}

Jobs MyEmployee::getTitle() {
    return *_title;
}

MyEmployee::~MyEmployee() {

}

string MyEmployee::getID() {
    return id.getID();
}
