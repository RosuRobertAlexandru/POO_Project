#define _CRT_SECURE_NO_WARNINGS
#pragma once
#include<string>
#include<iostream>
#include<istream>
using namespace std;


enum ticketType { student, adult, senior, child };
enum ticketPlace { Vip, lawn, tribute, boxes, normal };

class Ticket {
private:
	string tPlace="normal";
	string tType="adult";
	string ticketId="0000";
	string CustomerName="Mary Sue";

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

	Ticket(Ticket& ticketNew)
	{
		this->CustomerName=ticketNew.CustomerName;
		this->ticketId=ticketNew.ticketId;
		this->tPlace=ticketNew.tPlace;
		this->tType = ticketNew.tType;
	}
	
	~Ticket()
	{

	}
	friend ostream& operator<<(ostream& os,  Ticket& tkt);
	friend istream& operator>>(istream& is, Ticket& tkt);
	
	Ticket operator=(const Ticket& tkt) {
		this->CustomerName=tkt.CustomerName;
		this->ticketId=tkt.ticketId;
		this->tPlace=tkt.tPlace;
		this->tType=tkt.tType;
		return *this;
	};
};
ostream& operator<<(ostream& os,  Ticket& tkt)
{
	os << tkt.CustomerName <<" "<< tkt.ticketId <<" "<< tkt.tPlace << " " << tkt.tType;
	cout << endl;
	return os;
}
istream& operator>>(istream& is,  Ticket& tkt)
{	
	cout << "Enter name : ";
	is >> tkt.CustomerName;
	cout << "Enter id : ";
	is >> tkt.ticketId;
	cout << "Enter place : (vip , lawn , box)";
	is >> tkt.tPlace;
	cout << "Enter type of ticket : (adult , normal , vip)";
	is >> tkt.tType;
	return is;
}
//overload == and != to see if tickets are the same 
bool operator==(Ticket& left, Ticket& right)
{
	bool result = true;
	if (left.getCustomerName() != right.getCustomerName())
		result = false;
	if(left.getTicketId()!=right.getTicketId())
		result = false;
	if (left.getTicketPlace() != right.getTicketPlace())
		result = false;
	if(left.getTicketType()!=left.getTicketType())
		result = false;
	
	return result;
}
bool operator!=(Ticket& left, Ticket& right)
{
	bool result= !(left == right);
	return result;
}