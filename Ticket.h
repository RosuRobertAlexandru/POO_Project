#pragma once
#include<string>
using namespace std;

enum ticketType { student, adult, senior, child };
enum ticketPlace { Vip, lawn, tribute, boxes, normal };

class Ticket {
private:
	ticketPlace tPlace;
	ticketType tType;
	string ticketId;
	string CustomerName;

public:
	ticketPlace getTicketPlace()
	{
		return this->tPlace;
	}
	ticketType getTicketType()
	{
		return this->tType;
	}
	string getTicketId()
	{
		return this->ticketId;
	}
	string getCustomerName()
	{
		return this->CustomerName;
	}
	void setTicketPlace(ticketPlace tPlace)
	{
		this->tPlace = tPlace;
	}
	void setTicketType(ticketType tType)
	{
		this->tType = tType;
	}
	void setTicketId(string id) {
		this->ticketId = id;
	}
	void setCustomerName(string name)
	{
		this->CustomerName = name;
	}

	Ticket(ticketPlace tPlace , ticketType tType , string ticketId , string CustomerName)
	{
		setCustomerName(CustomerName);
		setTicketId(ticketId);
		setTicketPlace(tPlace);
		setTicketType(tType);
	}
	~Ticket()
	{

	}
};