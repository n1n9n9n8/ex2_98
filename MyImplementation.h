#include "interface.h"
#include <iostream>
#include "MyClasses/Elements.h"

class MyImplementation : public Ex2
{
  public:
	Employee *addEmployee(
		int seniority,
		int birth_year,
		string employer_id,
		Jobs title)
	{
		string test_id = "1";
		MyEmployee e = MyEmployee(seniority,birth_year,employer_id,title);
		cout << "Added successfully" << endl;
		return NULL;
	}

	Employee *getEmployee(string id) { return NULL; }

	Plane *addPlane(
		int model_number,
		map<Jobs, int> crew_needed,
		map<Classes, int> max_passangers)
	{
		cout << "Added successfully" << endl;
		return NULL;
	}

	Plane *getPlane(string id)
	{
		return NULL;
	}

	Flight *addFlight(
		int model_number,
		Date date,
		string source,
		string destination)
	{
		cout << "Added successfully" << endl;
		return NULL;
	}

	Flight *getFlight(string id) { return NULL; }

	Customer *addCustomer(
		string full_name,
		int priority)
	{
		cout << "Added successfully" << endl;
		return NULL;
	}

	Customer *getCustomer(string id) { return NULL; }

	Reservation *addResevation(
		string customerId,
		string flightId,
		Classes cls,
		int max_baggage)
	{
		cout << "Added successfully" << endl;
		return NULL;
	}

	Reservation *getReservation(string id)
	{
		return NULL;
	}

	void exit()
	{
		cout << "So sad you are leaving!" << endl;
	}
};
