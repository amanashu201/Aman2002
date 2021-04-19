/*cout the number of object in a program*/
#include<iostream>

using namespace std;

class count
{
	static int c;
public:
	void increment()
	{
		c++;
	}
	static void display()
	{
		cout<<"No of object:"<<c;
	}
};
int main()
{
	count c1;
	count::display();
	count c2,c3;
	count::display();
}
