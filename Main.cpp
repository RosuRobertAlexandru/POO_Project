#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include <string>
#include <fstream>
#include "Event.h"
#include"Location.h"
#include "Ticket.h"
#include"Billet.h"
using namespace std;


void bileter(Event evt , Location loc , Ticket tkt)
{
	
	int data = evt.getDate().length();
	int host = evt.getName().length();
	int code = loc.getSeatCode().length();
	int zone = loc.getSeatZone().length();
	int name = tkt.getCustomerName().length();
	int id = tkt.getTicketId().length();
	int place = tkt.getTicketPlace().length();
	int type = tkt.getTicketType().length();
	string s0="_ . _ . _ . _ . _ . _ . _ . _ . _ . _ . _ . _ . _ . _ . _ . _ . ";
	int rowlenght = s0.length();
	string s1=s0;
	s1.replace(0,data,evt.getDate());
	s1.replace(rowlenght-code,code,loc.getSeatCode());
	string s2=s0;
	s2.replace(0,host,evt.getName());
	s2.replace(rowlenght-zone,zone,loc.getSeatZone());
	string s3=s0;
	string s4=s0;
	s4.replace(0,name,tkt.getCustomerName());
	s4.replace(rowlenght-place,place,tkt.getTicketPlace());
	string s5=s0;
	s5.replace(0,id,tkt.getTicketId());
	s5.replace(rowlenght - type,type,tkt.getTicketType());

	cout << s1 << endl;
	cout << s2 << endl;
	cout << s3 << endl;
	cout << s4 << endl;
	cout << s5 << endl;

}


int main(int argc, char* argv[]) {
	/*Billet bilet,bil; Event event,evn; Location loc,loc1; Ticket tkt1, tkt2;
	cout << bilet;
	cout << event;
	cout << loc;
	cout << tkt1;
	loc = loc + "10";
	loc = loc - "";
	event = event * "Michael Jackson";
	event = event / "";
	if (tkt1 == tkt2)
		cout << "ticket identic";
	if (tkt1 != tkt2)
		cout << "there are different tickets";
	cin >> bilet;	
	loc = loc1;
	event = evn;
	tkt1 = tkt2;
	bil = bilet;*/

	//Event evt;
	//cin >> evt;
	//cout << evt<<endl;
	//
	//Location loc;
	//cin >> loc;
	//cout << loc << endl;;

	//Ticket tkt;
	//cin >> tkt;
	//cout << tkt;
	//cout << endl;
	///*Billet bilet(evt , loc , tkt);

	//cout << bilet;*/
	//Event evt1;
	//cin >> evt1;
	//cout << evt1 << endl;

	//Location loc1;
	//cin >> loc1;
	//cout << loc1 << endl;;

	//Ticket tkt1;
	//cin >> tkt1;
	//cout << tkt1;
	//cout << endl;

	//bileter(evt, loc, tkt);
	//cout << "================================================================"<<endl;
	//bileter(evt1, loc1, tkt1);
	
	int stop;
	cin >> stop;
	
}
