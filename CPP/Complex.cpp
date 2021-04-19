#include<iostream>

using namespace std;

class complex
{
	float real;
	float imag;
	
public:
	complex() {}
	complex(float r, float i)
	{
		real = r;
		imag = i;	
	}
	
	void display()
	{
		cout<<"real:"<<real<<endl;
		cout<<"imag:"<<imag<<endl;
	}
	
	complex operator+(complex x);
	complex operator+(int x);
	friend complex operator+(int x, complex c);
};

complex complex::operator+(complex x)
{
	complex t;
	
	t.real = this->real + x.real;
	t.imag = this->imag + x.imag;
	
	return t;
}

complex complex::operator+(int x)
{
	complex t;
	
	t.real = this->real + x;
	t.imag = this->imag + x;
	
	return t;
}

complex operator+(int x, complex c)
{
	complex t;
	
	t.real = c.real + x;
	t.imag = c.imag + x;
	
	return t;
}

int main()
{
	complex c1(5.3, 8.9), c2(9.9, 3.6), c3, c4, c5, c6;
	
	c3 = c1 + c2;
	
	c4 = c2 + c1;

	c5 = c1 + 2;
	
	c6 = 2 + c1;
		
	//c3 = c1.sum(c2);
	
	c3.display();
	c4.display();
	c5.display();
	c6.display();
	
	return 0;
}
