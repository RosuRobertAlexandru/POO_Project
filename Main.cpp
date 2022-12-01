#include<iostream>
#include <string>
#include <fstream>

using namespace std;


enum ticketType { student, adult, senior, child };
enum ticketPlace{Vip , lawn , tribute, boxes , normal};


class Location {
private:
	int totalNoOfSeats = 0;
	int noOfSeatsBooked = 0;
	string seatRow = "";
	string seatCode = "";
public:
};
class Event {
	string date;
	string dateFormat;
	string name;
	
private:

public:
};
class Ticket {
private:
	ticketPlace tPlace;
	ticketType tType;
	string ticketId;
	

public:
};


int main(int argc, char* argv[]) {
	
}