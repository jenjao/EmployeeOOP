//Date.h

#ifndef DATE_H
#define DATE_H

class Date {
	public:
		static const int monthsPerYear = 12;
		Date (int = 1, int = 1, int = 1900); //default constructor
		void print() const;
		~Date();
	private:
		int month; 
		int day;
		int year;

		//utility function to check if day is proper for month and year
		int checkDay(int) const;
};

#endif
