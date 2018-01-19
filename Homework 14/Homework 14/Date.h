//Tanner Kvarfordt
//A02052217

//The header file for the Date class which allows the programmer to 
//create an object that stores a month, day, and year.

#ifndef DATE_H
#define DATE

#include<string>
using namespace std;

class Date {
private:
	int month, day, year;
public:
	//Default constructor
	Date();
	//receives nothing, returns year
	int getYear();
	//receives nothing, returns month
	int getMonth();
	//receives nothing, returns day
	int getDay();
	//receives year and validates it, returns nothing
	void setYear(int);
	//receives month and validates it, returns nothing
	void setMonth(int);
	//receives day and validates it, returns nothing
	void setDay(int);
	//receives nothing, returns date in shortened form
	string getDateShort();
	//receives nothing, returns date in long form
	string getDateLong();
	//receives day, month, year, sets them all, returns nothing
	void setDate(int, int, int = 0);
	//non-default constructor to set month, day, year
	Date(int, int, int = 0);
};

#endif