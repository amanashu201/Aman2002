#include<iostream>

using namespace std;

class A				//base class
{
protected:
	int a;
	
public:
	A()
	{
		a=10;
	}
	A(int x)
	{
		a = x;
	}
	
	void display_a()
	{
		cout<<"a="<<a<<endl;
	}
};

class B : public A			//derived class
{
	int b;
	
public:
	B()
	{
		b=20;
	}
	B(int x)
	{
		b = x;
	}
	B(int x, int y) : A(x)
	{
		b = y;
	}	
	void display_b()
	{
		cout<<"b="<<b<<endl;
	}
	void display_ab()
	{
		cout<<"a="<<a<<", b="<<b;
	}
};

int main()
{
	B obB(50, 100);
	
	obB.display_a();
	obB.display_b();
	obB.display_ab();
	
	return 0;
}
