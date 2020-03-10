//HourlyEmployee.cpp

#include <iostream>
#include "Employee.h"
#include "HourlyEmployee.h"

HourlyEmployee::HourlyEmployee (const int &uID, const std::string &first, const std::string &last, const char &mInitial, const int &deptCode, const Date &dateOfHire, const double &hWorked, const double &hRate)
: Employee(uID, first, last, mInitial, deptCode, dateOfHire) {
	hoursWorked = hWorked;
	hourlyRate =hRate;
}

void HourlyEmployee::setHours (double hWorked) {
	hoursWorked = hWorked;
};

int HourlyEmployee::getHours() const {
	return hoursWorked;
}

void HourlyEmployee::setRate (double hRate) {
	hourlyRate = hRate;
}

int HourlyEmployee::getRate() const {
	return hourlyRate;
}

void HourlyEmployee::print() {
	Employee::print();
	std::cout << "Salary: ";
	std::cout << salaryCalculation();
	std::cout << std::endl;
}

double HourlyEmployee::salaryCalculation() {
	double temp;

	if ((getHours() < 161) && (getHours() > 0)) {
		temp = getRate() * getHours();
	}
	else if (getHours() > 160 && getHours() > 0) { 
		double excess = (getHours() - 160); 
		double excess_total = ((1.5 * getRate()) * excess);
		temp = excess_total + (160 * getRate());
	}
	else {
		throw std::invalid_argument ("hours must be greater than 0");
	}

	return temp;
}
