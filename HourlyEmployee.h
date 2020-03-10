#ifndef HOURLYEMPLOYEE_H
#define HOURLYEMPLOYEE_H

#include <iostream>
#include "Employee.h"

class HourlyEmployee : public Employee {
	private:
		double hoursWorked;
		double hourlyRate;
	public:
		HourlyEmployee (const int &, const std::string &, const std::string &, const char &, const int &, const Date &, const double &, const double &);

		void setHours(double hWorked);
		int getHours() const;

		void setRate(double hRate);
		int getRate() const;

		void print();

		double salaryCalculation();
};

#endif
