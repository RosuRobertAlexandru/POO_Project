#pragma once
#include<string>
using namespace std;
#pragma warning(disable : 4996)

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
	Location()
	{
		setSeatZone("seat zone");
		setSeatCode(strcpy(new char[10], "seat code"));
		setNoOfSeatsBooked(noOfSeatsBooked + 1);
	}
	
	Location(string seatZone, char* seatCode, int noOfSeatsBooked)
	{
		setSeatZone(seatZone);
		setSeatCode(seatCode);
		setNoOfSeatsBooked(noOfSeatsBooked+1);
	}
	
	Location(Location& locNew)
	{
		this->noOfSeatsBooked = locNew.getNoOfSeatsBooked();
		this->seatZone = locNew.getSeatZone();
		strcpy(this->seatCode, locNew.getSeatCode());

	}

	~Location()
	{
		delete[] seatCode;
	}
	friend ostream& operator<<(ostream& os,  Location& loc);
	friend istream& operator>>(istream& is,  Location& loc);

	Location operator= (const Location & loc)
	{
		this->noOfSeatsBooked = loc.noOfSeatsBooked;
		this->seatZone = loc.seatZone;
		strcpy(this->seatCode, loc.seatCode);
		return *this;
	}
	
};
ostream& operator<<(ostream& os,  Location& loc)
{
	os << loc.seatCode<<" "<<loc.seatZone;
	return os;
}
istream& operator>>(istream& is, Location& loc)
{
	is >>loc.seatCode>>loc.seatZone;
		return is;
}
//overload + - to add/remove seat zone

Location operator+(Location loc, string seat)
{
	Location result=loc;
	result.setSeatZone(seat);

	return result;
}

Location operator-(Location loc, string seat)
{
	Location result = loc;
	result.setSeatZone("To be addded");

	return result;
}
