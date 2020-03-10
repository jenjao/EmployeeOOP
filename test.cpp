#include <iostream>
#include "Employee.h"
#include "Date.h"

int main() {

	Date birth (7, 24, 1949);
	Date hire (3, 12, 1988);
	Employee manager (5046, "Bob", "Blue", 'H', 56, birth, hire);

	std::cout << std::endl;
	manager.print();
}
