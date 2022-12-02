#pragma once
#include "Event.h"
#include"Location.h"
#include "Ticket.h"

class Billet {
private:
	Ticket ticket;
	Event event;
	Location location;
public:

	Billet(Event event , Location location , Ticket ticket) {
		this->event = event;
		this->location = location;
		this->ticket = ticket;
	}
	~Billet()
	{

	}
};