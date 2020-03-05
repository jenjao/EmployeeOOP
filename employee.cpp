#include <iostream>
#include "Employee.h"
#include "Date.h"

Employee::Employee (const string &first, const string &last, const Date &dateOfBirth, const Date &dateOfHire)
	: firstName(first), lastName(last), birthDate(dateOfBirth), hireDate(dateOfHire) {
		cout << "Employee object constructor: " << firstName << ' ' << lastname << endl;
	}


