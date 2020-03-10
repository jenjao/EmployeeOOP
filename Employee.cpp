#include <iostream>
#include "Employee.h"
#include "Date.h"

// constructor uses member initializer list to pass initializer values to constructors of member objects
Employee::Employee (const int &uID, const std::string &first, const std::string &last, const char &mInitial, const int &deptCode, const Date &dateOfHire)
	: userID(uID), firstName(first), lastName(last), middleInitial(mInitial), departmentCode(deptCode), hireDate(dateOfHire) {
		//std::cout << "Employee object constructor: " << firstName << ' ' << lastName << std::endl;
	}

// print Employee object
void Employee::print() const {
	std::cout << "User ID: " << userID << std::endl;
	std::cout << lastName << ", " << firstName << " " << middleInitial << std::endl;
	std::cout << "Department Code: " << departmentCode << std::endl;
	std::cout << "Hired: ";
	hireDate.print();
	std::cout << std::endl;
}

Employee::~Employee() { //output Employee object to show when its destructor is called
	//std::cout << "Employee object destructor: " << lastName << ", " << firstName << std::endl;
}


