#include<iostream>

using namespace std;

class AccessSpecifier
{
private:
	int a;
	
protected:
	int b;

public:
	int c;	
	AccessSpecifier()
	{
		a=10;
		b=20;
		c=30;
	}
	void displayabc()
	{
		cout<<"a="<<a<<", b="<<b<<", c="<<c;
	}		
};

class Derived : public AccessSpecifier
{
public:
	Derived() : AccessSpecifier()
	{
		b = 200;
		c = 300;
	}
};

int main()
{
	Derived ob;
	
	ob.c = 2000;
	ob.displayabc();
}
