#include "interface.h"


class MyCustomer : public Customer
{
    int pr;
public:		
    MyCustomer(int pr) : pr(pr){}
	string getFullName(){return "John Snow";    }
	int getPriority() {return pr;   }
	list<Reservation*> getReservations() {return list<Reservation*>();  }
};

class MyReservation : public Reservation
{
public:	
	Customer* getCustomer() {return NULL;   }
	Flight* getFlight() {return NULL;   }
	Classes getClass() {return SECOND_CLASS;    }
	virtual int getMaxBaggage() {return 1;}
};
