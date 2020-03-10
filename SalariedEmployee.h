#ifndef SALARIEDEMPLOYEE_H
#define SALARIEDEMPLOYEE_H

#include <iostream>
#include "Employee.h"

class SalariedEmployee {
	private:
		double monthlySalary;
	public:
		SalariedEmployee (const int &, const std::string &, const std::string &, const char &, const int &, const Date &);

		void setSalary(double salary);
		int getSalary() const;

		void print() const;

		double salaryCalculation();

};

#endif
		
