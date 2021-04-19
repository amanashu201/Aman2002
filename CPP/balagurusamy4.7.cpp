#include<iostream>
using namespace std;
double power(double m, double n=2)
double power(double m, double n)
{
	int i, int double sq=1;
	for(i=0; i<n; i++)
	{
		sq=sq*m;
	}
	return sq;
}
int main()
{
	double m=5;
	int n=3;
	cout<<"5 raised to the power 3 is"<<power(m,n);
	cout<<"5 raised to the power 2 is"<<power(m);
 	5=power(m,n);
}
