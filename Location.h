#pragma once
#include<string>
using namespace std;

class Location {
private:
	const static int MaxSeatNumber=300;
	 int noOfSeatsBooked = 0;
	string seatZone = "";
	char* seatCode = nullptr;
public:
	int getMaxSeatNumber()
	{
		return this->MaxSeatNumber;
	}
	int getNoOfSeatsBooked()
	{
		return this->noOfSeatsBooked;
	}
	string getSeatZone()
	{
		return this->seatZone;
	}
	char* getSeatCode()
	{
		return this->seatCode;
	}
	void setNoOfSeatsBooked(int noOfSeatsBooked)
	{
		if(noOfSeatsBooked<0)
		{
			throw "Cannot have negative seats booked";
		}
		if (noOfSeatsBooked > getMaxSeatNumber())
		{
			throw "No more seats avaiable";
		}
		this->noOfSeatsBooked = noOfSeatsBooked;
	}
	void setSeatZone(string seatZone)
	{	
		if (seatZone.length() <= 0)
		{
			throw "Seat zone cannot be empty";
		}
		if(seatZone.length()<3)
		{
			throw "Name too short";
		}
		this->seatZone = seatZone;
	}
	void setSeatCode(char* seatCode)
	{
		if (seatCode == nullptr)
		{
			throw "Seat code cannot be empty";
		}
		strcpy(this->seatCode, seatCode);

	}
	
	Location(string seatZone, char* seatCode, int noOfSeatsBooked)
	{
		setSeatZone(seatZone);
		setSeatCode(seatCode);
		setNoOfSeatsBooked(noOfSeatsBooked+1);
	}
	~Location()
	{
		delete[] seatCode;
	}
	
};