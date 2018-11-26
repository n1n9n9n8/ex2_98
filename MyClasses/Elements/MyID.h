//
// Created by noamc on 23/11/2018.
//

#ifndef EX2_98_MYID_H
#define EX2_98_MYID_H


#include "../../interface.h"

class MyID : public ID{
    string _id;
public:
    MyID(string id);
    virtual string getID();
};


#endif //EX2_98_MYID_H
