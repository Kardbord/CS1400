//Tanner Kvarfordt
//A02052217

//this is the source file for the implementation of Date.h

#include "Date.h"

Date::Date() {
	setDay(1);
	setMonth(1);
	setYear(2000);
}

int Date::getYear() { return year; }

int Date::getMonth() { return month; }

int Date::getDay() { return day; }

void Date::setYear(int newYear) {
	if (newYear >= 0 && newYear <= 3000) {
		year = newYear;
	}
	//note: if year = 0 then the date applies to more than one year. e.g. Halloween on October 31st
	else { year = 0; }

	setDay(day);
}

void Date::setMonth(int newMonth) {
	if (newMonth >= 1 && newMonth <= 12) {
		month = newMonth;
	}
	else { month = 1; }
	
	//calling setDay ensures the day is still valid
	setDay(day);
}

void Date::setDay(int newDay) {
	switch (month){
	case 1:
		if (newDay >= 1 && newDay <= 31) {
			day = newDay;
		}
		else { day = 1; }
		break;
	case 2:
		if (year % 4 == 0) {
			if (year % 100 == 0 && year % 400 != 0) {
				if (newDay >= 1 && newDay <= 28) {
					day = newDay;
				}
				else { day = 1; }
			}
			else if (newDay >= 1 && newDay <= 29) {
				day = newDay;
			}
			else { day = 1; }
		}
		else if (newDay >= 1 && newDay <= 28) {
			day = newDay;
		}
		else { day = 1; }
		break;
	case 3:
		if (newDay >= 1 && newDay <= 31) {
			day = newDay;
		}
		else { day = 1; }
		break;
	case 4:
		if (newDay >= 1 && newDay <= 30) {
			day = newDay;
		}
		else { day = 1; }
		break;
	case 5:
		if (newDay >= 1 && newDay <= 31) {
			day = newDay;
		}
		else { day = 1; }
		break;
	case 6:
		if (newDay >= 1 && newDay <= 30) {
			day = newDay;
		}
		else { day = 1; }
		break;
	case 7:
		if (newDay >= 1 && newDay <= 31) {
			day = newDay;
		}
		else { day = 1; }
		break;
	case 8:
		if (newDay >= 1 && newDay <= 31) {
			day = newDay;
		}
		else { day = 1; }
		break;
	case 9:
		if (newDay >= 1 && newDay <= 30) {
			day = newDay;
		}
		else { day = 1; }
		break;
	case 10:
		if (newDay >= 1 && newDay <= 31) {
			day = newDay;
		}
		else { day = 1; }
		break;
	case 11:
		if (newDay >= 1 && newDay <= 30) {
			day = newDay;
		}
		else { day = 1; }
		break;
	case 12:
		if (newDay >= 1 && newDay <= 31) {
			day = newDay;
		}
		else { day = 1; }
		break;
	}
}

string Date::getDateShort() {
	if (year == 0) {
		return to_string(month) + '/' + to_string(day);
	}
	else {
		return to_string(month) + '/' + to_string(day) + '/' + to_string(year);
	}
}

string Date::getDateLong() {
	string longMonth;
	switch (month) {
	case 1:
		longMonth = "January";
		break;
	case 2:
		longMonth = "February";
		break;
	case 3:
		longMonth = "March";
		break;
	case 4:
		longMonth = "April";
		break;
	case 5:
		longMonth = "May";
		break;
	case 6:
		longMonth = "June";
		break;
	case 7:
		longMonth = "July";
		break;
	case 8:
		longMonth = "August";
		break;
	case 9:
		longMonth = "September";
		break;
	case 10:
		longMonth = "October";
		break;
	case 11:
		longMonth = "November";
		break;
	case 12:
		longMonth = "December";
		break;
	}
	if (year == 0) {
		return longMonth + ' ' + to_string(day);
	}
	else {
		return longMonth + ' ' + to_string(day) + ", " + to_string(year);
	}
}

void Date::setDate(int newMonth, int newDay, int newYear) {
	setMonth(newMonth);
	setYear(newYear);
	setDay(newDay);
}

Date::Date(int newMonth, int newDay, int newYear) {
	setMonth(newMonth);
	setYear(newYear);
	setDay(newDay);
}