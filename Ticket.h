#pragma once
#include<string>
#include<iostream>
#include<istream>
using namespace std;
#define _CRT_SECURE_NO_WARNINGS

enum ticketType { student, adult, senior, child };
enum ticketPlace { Vip, lawn, tribute, boxes, normal };

class Ticket {
private:
	string tPlace;
	string tType;
	string ticketId;
	string CustomerName;

public:
	string getTicketPlace()
	{
		return this->tPlace;
	}
	string getTicketType()
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
	void setTicketPlace(string tPlace)
	{
		this->tPlace = tPlace;
	}
	void setTicketType(string tType)
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
	Ticket() {
		{
			setTicketPlace("normal");
			setTicketType("adult");
			setTicketId("0000");
			setCustomerName("John Doe");
		}
	}

	Ticket(string tPlace , string tType , string ticketId , string CustomerName)
	{
		setCustomerName(CustomerName);
		setTicketId(ticketId);
		setTicketPlace(tPlace);
		setTicketType(tType);
	}
	~Ticket()
	{

	}
	friend ostream& operator<<(ostream& os,  Ticket& tkt);
	friend istream& operator>>(istream& is, Ticket& tkt);
};
ostream& operator<<(ostream& os,  Ticket& tkt)
{
	os << tkt.CustomerName <<" "<< tkt.ticketId <<" "<< tkt.tPlace << " " << tkt.tType;
	return os;
}
istream& operator>>(istream& is,  Ticket& tkt)
{
	is >> tkt.CustomerName>> tkt.ticketId >> tkt.tPlace >> tkt.tType;
	return is;
}