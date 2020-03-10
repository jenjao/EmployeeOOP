#ifndef SALARIEDEMPLOYEE_H
#define SALARIEDEMPLOYEE_H

#include <iostream>
#include "Employee.h"

class SalariedEmployee : public Employee {
	private:
		double monthlySalary;
	public:
		SalariedEmployee (const int &, const std::string &, const std::string &, const char &, const int &, const Date &, const double &);

		void setSalary(double salary);
		int getSalary() const;

		void print();

		double salaryCalculation(int days);

};

#endif
		
