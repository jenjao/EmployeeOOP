all: test.o Date.o Employee.o HourlyEmployee.o SalariedEmployee.o
	g++ test.o Date.o Employee.o HourlyEmployee.o SalariedEmployee.o -o emp

test.o: test.cpp Date.h Employee.h HourlyEmployee.h SalariedEmployee.h
	g++ -c test.cpp

Date.o: Date.cpp Date.h
	g++ -c Date.cpp

Employee.o: Employee.cpp Employee.h
	g++ -c Employee.cpp

HourlyEmployee.o: HourlyEmployee.cpp HourlyEmployee.h
	g++ -c HourlyEmployee.cpp

SalariedEmployee.o: SalariedEmployee.cpp SalariedEmployee.h
	g++ -c SalariedEmployee.cpp

clean:
	rm *.o
	rm emp	
