#include<iostream>

using namespace std;

class PlusToMinus
{
	int i;
	
public:
	PlusToMinus() {	}
	
	PlusToMinus(int x)
	{
		i = x;
	}
	PlusToMinus operator+(PlusToMinus x);	
	void display();
};

PlusToMinus PlusToMinus :: operator+(PlusToMinus x)
{
	PlusToMinus p;
	
	p.i = i - x.i;
	
	return p;
}

void PlusToMinus :: display()
{
	cout<<"i="<<i;
}

int main()
{
	PlusToMinus p1(30), p2(20), p3;
	
	p3 = p1 + p2;
	
	p3.display();
	
}
