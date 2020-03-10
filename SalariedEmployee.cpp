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

void SalariedEmployee::print() const {

}

double SalariedEmployee::salaryCalculation() {

}
