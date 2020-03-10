//Date.cpp

#include <iostream>
#include <stdexcept>
#include "Date.h"

//constructor confirms proper value for month; calls utility function checkDay to confirm proper value for day

Date::Date (int mn, int dy, int yr) {
	if (mn > 0 && mn <= monthsPerYear) //validate the month
		month = mn;
	else 
		throw std::invalid_argument ("month must be 1-12");

	year = yr;
	day = checkDay(dy);

	//output Date object to show when its constructor is called
	//std::cout << "Date object constructor for date ";
	//print();
	//std::cout << std::endl;
}

void Date::print() const {
	std::cout << month << '/' << day << '/' << year;
}

Date::~Date() {
	//std::cout << "Date object destructor for date "; print();
	//std::cout << std::endl;
}

//confirm proper day value with leap year
int Date::checkDay (int testDay) const {
	static const int daysPerMonth [monthsPerYear + 1] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

	//determine whether testDay is valid for specified month
	if (testDay > 0 && testDay <= daysPerMonth[month]) 
		return testDay;

	if( month == 2 && testDay == 29 && (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0 ) ) )
		return testDay;

	throw std::invalid_argument ( "Invalid day for current month and year" );
}


