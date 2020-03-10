//SalariedEmployee.cpp

#include <iostream>
#include "Employee.h"
#include "Date.h"
#include "SalariedEmployee.h"

SalariedEmployee::SalariedEmployee (const int &uID, const std::string &first, const std::string &last,
		const char &mInitial, const int &deptCode, const Date &dateOfHire, const double &salary)
   		: Employee(uID, first, last, mInitial, deptCode, dateOfHire) {

		monthlySalary = salary;

}

void SalariedEmployee::setSalary (double salary) {
	monthlySalary = salary;
}

double SalariedEmployee::getSalary() const {
	return monthlySalary;
}

void SalariedEmployee::print() {
	Employee::print();
	std::cout << "Salary: ";
	std::cout << salaryCalculation();
	std::cout << std::endl;
}

double SalariedEmployee::salaryCalculation() {
	
	double temp;

	if (getDays() == 31 && getDays() > 0) {
		temp = getSalary();
	}
	else if (days < 31 && days > 0) {
		temp = (days / 31) * getSalary();
	}
	else {
		throw std::invalid_argument ("days must be greater than 0 and lesser than 32");
	}

	return temp;
}
