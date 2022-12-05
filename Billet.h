#define _CRT_SECURE_NO_WARNINGS
#pragma once
#include "Event.h"
#include"Location.h"
#include "Ticket.h"

using namespace std;
//maybe differnt overload << >> 
class Billet {
private:
	Ticket ticket;
	Event event;
	Location location;
public:
	
	Billet() {
		event = Event();
		ticket = Ticket();
		location = Location();
	}
	
	Billet(Event event , Location location , Ticket ticket) {
		this->event = event;
		this->location = location;
		this->ticket = ticket;
	}

	Billet(Billet& bilNew)
	{
		this->event = bilNew.event;
		this->location = bilNew.location;
		this->ticket = bilNew.ticket;
	}
	
	~Billet()
	{

	}
	friend ostream& operator<<(ostream& os,  Billet& bil);
	friend istream& operator>>(istream& is,  Billet& bil);

	Billet operator=(const Billet& bil)
	{
		this->event = bil.event;
		this->location = bil.location;
		this->ticket = bil.ticket;
		return *this;
	}
	
};
ostream& operator<<(ostream& os,  Billet& bil)
{
	os << bil.event << " " << bil.location << " " << bil.ticket;
	cout << endl;
	return os;
}
istream& operator>>(istream& is, Billet& bil)
{
	is >> bil.event >> bil.location >> bil.ticket;
	return is;
}
//overload ++ -- to add/remove billets ??? new initiative 
