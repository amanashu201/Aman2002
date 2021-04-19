#include<iostream>

using namespace std;

class date
{
	int day;
	int month;
	int year;
	
public:
	date() {}
	date(int dd , int mm, int yyyy)
	{
		day = dd;
		month = mm;
		year = yyyy;
	}
	
	void display()
	{
		cout<<day<<"-"<<month<<"-"<<year;
	}
	
	date operator-(date x);
	
	date operator-(int x);
};

date date::operator-(date x)
{
	date d;
	
	if(this->year>x.year)
	{
		d.year = this->year - x.year;
		d.month = this->month - x.month;
		d.day = day - x.day;
	}
	else
	{
		d.year = x.year - year;
		d.month = x.month - month;
		d.day = x.day - day;
	}
	
	return d;
}

date date::operator+(int x)
{
	date d;
	
	d.day = day + x;
 } 

int main()
{

	date d1(5, 3, 2015), d2(3, 5, 2020), d3;
	
	d3 = d1 - d2;
	
	d3.display();
	
	return 0;
}
