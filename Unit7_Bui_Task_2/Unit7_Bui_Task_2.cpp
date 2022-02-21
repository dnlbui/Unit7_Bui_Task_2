/* Unit7_Bui_Task_2.cpp : This file contains the 'main' function.Program execution begins and ends there.
First name : Daniel
Last name : Bui
Section : 2022 COSC 1436 57002
Txt editor : Visual Studio 2022
Dev - C++
Program creates seperate functions to display values in the structure.Additonal function that will display all the values for each entity in the event structure-using the results from the seperate structure.
*/

#include<iostream>
#include <string>
#include<iomanip>
using namespace std;


struct TimeOfDay
{
	short hour;
	short minute;
	short second;
};

struct AppDate
{
	short dayOfMonth;
	short month;
	int year;
};

struct Event
{
	string eventName;
	TimeOfDay eventTime;
	AppDate eventDate;
	bool isUrgent;
};

void displayTODValues(Event);
void displayADValues(Event); //function prototype
void displayEventDetails(Event);

int main() {

	//TimeOfDay time1 = { 1, 25, 3 }; //defining
	//AppDate date1 = { 1,2,2022 }; //defining
	Event event1;//defining
	event1.eventName = "One";
	event1.eventTime = { 1, 25, 3 };
	event1.eventDate = { 1,2,2022 };
	//event1.eventTime = time1;
	//event1.eventTime = { 4,15,6 };
	//event1.eventDate = date1;
	//event1.eventDate = { 2,3,2022 };
	event1.isUrgent = true;
	

	//cout << event1.eventTime.minute;
	//displayTODValues(event1);
	//displayADValues(event1);
	displayEventDetails(event1);
}

void displayTODValues(const Event t)
{
	cout << "Hour: " << t.eventTime.hour<<"  ";
	cout << "Minute: " << t.eventTime.minute << "  ";
	cout << "Second: " << t.eventTime.second << "  \n";
}

void displayADValues(const Event a)
{
	cout << "Day of month: " << a.eventDate.dayOfMonth << "  ";
	cout << "Month: " << a.eventDate.month << "  ";
	cout << "Year: " << a.eventDate.year << "  \n";
}



void displayEventDetails(const Event e)
{
	displayADValues(e);
	displayTODValues(e);
	cout << "Urgency: " << e.isUrgent << "  \n";
	//cout << "Name: " << e.eventName << "  \n";
	//cout << "Hour: " << e.eventTime.hour << "  ";
	//cout << "Minute: " << e.eventTime.minute << "  ";
	//cout << "Second: " << e.eventTime.second << "  \n";
	//cout << "Day of month: " << e.eventDate.dayOfMonth << "  ";
	//cout << "Month: " << e.eventDate.month << "  ";
	//cout << "Year: " << e.eventDate.year << "  \n";
	
}
