#pragma once
#include "Event.h"
#include"Location.h"
#include "Ticket.h"
#define _CRT_SECURE_NO_WARNINGS

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
	~Billet()
	{

	}
	friend ostream& operator<<(ostream& os,  Billet& bil);
	friend istream& operator>>(istream& is,  Billet& bil);
	
};
ostream& operator<<(ostream& os,  Billet& bil)
{
	os << bil.event << " " << bil.location << " " << bil.ticket;
	return os;
}
istream& operator>>(istream& is, Billet& bil)
{
	is >> bil.event >> bil.location >> bil.ticket;
	return is;
}
