#include<iostream>
using namespace std;

class StackWorkingDemo
{
public:
	static int id;
	
	StackWorkingDemo()
	{
		id++;
		cout<<"Object "<<id<<"  Created!"<<endl;
	}
	~StackWorkingDemo()
	{
		cout<<"Object "<<id<<" Destroyed!"<<endl;
		id--;
	}
};

int StackWorkingDemo::id = 0;

int main()
{
	StackWorkingDemo s1,s2,s3,s4,s5;
	return 0;
}
