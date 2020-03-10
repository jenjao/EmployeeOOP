#include <iostream>
#include "Employee.h"
#include "SalariedEmployee.h"
#include "HourlyEmployee.h"

int main() {

	Date hire (3, 12, 1988);
	double hours = 177;
	double rate = 20;
	int days = 16;
	double monthly = 3000;

	Employee manager (5046, "Bob", "Blue", 'H', 56, hire);
	HourlyEmployee dude (5555, "Frankie", "Nerd", 'O', 222, hire, hours, rate);
	SalariedEmployee dude2 (7777, "Jen", "Normal", 'T', 111, hire, monthly);
	std::cout << std::endl;

	//dude.Employee::print();
	double salary = dude.salaryCalculation();
	double salary2 = dude2.salaryCalculation(days);
	dude.print();
	dude2.print();
	std::cout << std::endl;
	//manager.print();

	return 0;
}
