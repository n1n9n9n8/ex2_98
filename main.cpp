#include "interface.h"
#include "MyImplementation.h"

#include <iostream>

int main() {
    Ex2 *ex2 = new MyImplementation();  // This line must work!
    ex2->addCustomer("Michael A", 3);
    ex2->addResevation("123456", "54321", FIRST_CLASS, 2);
    return 0;
}