#pragma once
#include<string>
using namespace std;

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
	Event( string date , string name)
	{
		setDate(date);
		setName(name);
	}
	~Event()
	{

	}
};