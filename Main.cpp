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
	
	void setTotalNoOfSeats(int totalNoOfSeats) {
		this->totalNoOfSeats = totalNoOfSeats;
	}
	int getTotalNoOfSeats() {
		return totalNoOfSeats;
	}
	void setNoOfSeatsBooked(int noOfSeatsBooked) {
		this->noOfSeatsBooked = noOfSeatsBooked;
	}
	int getNoOfSeatsBooked() {
		return noOfSeatsBooked;
	}
	void setSeatRow(string seatRow) {
		this->seatRow = seatRow;
	}
	string getSeatRow() {
		return seatRow;
	}
	void setSeatCode(string seatCode) {
		this->seatCode = seatCode;
	}
	string getSeatCode() {
		return seatCode;
	}
};

class Event {
private:
	string date;
	string dateFormat;
	string name;
	


public:
	
	void setDate(string date) {
		this->date = date;
	}
	string getDate() {
		return date;
	}
	void setDateFormat(string dateFormat) {
		this->dateFormat = dateFormat;
	}
	string getDateFormat() {
		return dateFormat;
	}
	void setName(string name) {
		this->name = name;
	}
	string getName() {
		return name;
	}
};

class Ticket {
private:
	ticketPlace tPlace;
	ticketType tType;
	string ticketId;
	

public:
	
	void settPlace(ticketPlace tPlace) {
		this->tPlace = tPlace;
	}
	ticketPlace gettPlace() {
		return tPlace;
	}
	void settType(ticketType tType) {
		this->tType = tType;
	}
	ticketType gettType() {
		return tType;
	}
	void setTicketId(string ticketId) {
		this->ticketId = ticketId;
	}
	string getTicketId() {
		return ticketId;
	}

};

class Billet {
	Ticket* ticket;
	Event* event;
	Location* location;
};

int main(int argc, char* argv[]) {
	Billet bilet = Billet();
}