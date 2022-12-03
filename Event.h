#define _CRT_SECURE_NO_WARNINGS
#pragma once
#include<string>
#include<exception>
using namespace std;


class Event {
private:
	string date="01/01/1956";
	string name="Not famoous person";
	const static int MIN_NAME_LENGH = 3;
	const static int DATE_FORMAT_LENGH = 8;


public:
	string getDate()
	{
		return this->date;
	}
	string getName()
	{
		return this->name;
	}
	void setDate(string date)
	{
		if(date.length()<DATE_FORMAT_LENGH)
		{
			throw "Date too short";
		}
		this->date = date;
	}
	void setName(string name)
	{
		if(name.length()<MIN_NAME_LENGH)
		{
			throw "Name of the event too short";
		}
		this->name = name;
	}
	Event()
	{
		setDate("2-12-2022");
		setName("John Doe");
	}
	Event( string date , string name)
	{
		setDate(date);
		setName(name);
	}

	Event(Event& evnNew)
	{
		this->date = evnNew.date;
		this->name = evnNew.name;
	}
	
	~Event()
	{

	}
	friend ostream& operator<<(ostream& os,  Event& evn);
	friend istream& operator>>(istream& is,  Event& evn);
	Event operator=(const Event& evn)
	{
		this->date = evn.date;
		this->name = evn.name;
		return *this;
	}
	
	Event operator=(Event& evn)
	{
		this->date = evn.date;
		this->name = evn.name;
		return *this;
	}

};
ostream& operator<<(ostream& os,  Event& evn)
{
	os << "On : " << evn.date << " hosted by : " << evn.name;
	return os;
}
istream& operator>>(istream& is,  Event& evn)
{	
	cout << "date is : ";
	is >> evn.date;
	cout << "Host is : ";
	is >> evn.name;
	cout << endl;
	return is;
}
//overload */ / to edit / remove the name from events 
Event operator*(Event& evn, string newName)
{
	evn.setName(newName);
	return evn;
}
Event operator/(Event& evn, string newName)
{
	evn.setName("to be added ");
	return evn;
}