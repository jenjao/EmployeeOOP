all: test.o Date.o Employee.o
	g++ test.o Date.o Employee.o -o emp

test.o: test.cpp Date.h Employee.h
	g++ -c test.cpp

Date.o: Date.cpp Date.h
	g++ -c Date.cpp

Employee.o: Employee.cpp Employee.h
	g++ -c Employee.cpp

clean:
	rm *.o
	rm emp	
