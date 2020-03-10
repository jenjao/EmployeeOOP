//Employee.h

#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>
#include "Date.h"

class Employee {
	public:
		Employee (const int &, const std::string &, const std::string &, const char &, const int &, const Date &);
		void print() const;
		~Employee(); //provided to confirm destruction order
		
	protected:
		int userID;
		std::string firstName; //composition: member object
		std::string lastName; //composition: member object
		char middleInitial;
		int departmentCode;
		const Date hireDate;
}; 

#endif

