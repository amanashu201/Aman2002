//multilevel inheritance
#include<iostream>
using namespace std;

class student
{
	protected:
		int roll_number;
	public:
		void get_number();
		void put_number();
};
void student :: get_number()
{
	int a;
	roll_number = a;
}
void student :: put_number()
{
	cout << " Roll number:"<< roll_number <<"\n";
}
class test : public student
{
	protected:
		float sub1;
		float sub2;
	public:
		void get_marks();
		void put_marks();
};
void test :: get_marks()
{
	float x,y;
	sub1 = x;
	sub2 = y;
}
void test :: put_marks()
{
	cout<< "Marks in sub1 =" <<sub1<< "\n";
	cout<< "Marks in sub2 =" <<sub2<< "\n";
}
class result : public test
{
	float total;
  public:
  	void display();
};
void result :: display()
{
	total = sub1 + sub2;
	put_number();
	put_marks();
	cout<< "Total ="<<total<< "\n";
}
int main()
{
	result student1;
	
	student1.get_number();
	student1.get_marks();
	student1.display();
	
	return 0;
}
