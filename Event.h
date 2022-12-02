#pragma once
#include<string>
using namespace std;
#define _CRT_SECURE_NO_WARNINGS

class Event {
private:
	string date;
	string name;
	const static int MIN_NAME_LENGH = 3;
	const static int DATE_FORMAT_LENGH = 10;


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
	~Event()
	{

	}
	friend ostream& operator<<(ostream& os,  Event& evn);
	friend istream& operator>>(istream& is,  Event& evn);
};
ostream& operator<<(ostream& os,  Event& evn)
{
	os << evn.date << " " << evn.name;
	return os;
}
istream& operator>>(istream& is,  Event& evn)
{
	is >> evn.date >> evn.name;
	return is;
}