#include "autoptr.h"
#include "uniqueptr.h"
#include "shareptr.h"

class Date {
public:
	Date(int year, int month, int day)
		: _year(year)
		, _month(month)
		, _day(day)
	{}
	
	void PrintDate() {
		std::cout << _year << " " << _month << " " << _day << " " << std::endl;
	}
private:
	int _year;
	int _month;
	int _day;
};

int main() {
	//AutoPtr<Date> d1 = new Date(2019, 10, 31);
	//AutoPtr<Date> d2 = d1;
	//UniquePtr<Date> d1 = new Date(2019, 11, 01);
	//UniquePtr<Date> d2 = d1;
	SharePtr<Date> d1 = new Date(2019, 11, 01);
	SharePtr<Date> d2(d1);
	SharePtr<Date> d3 = d2;

	d1->PrintDate();
	return 0;
}