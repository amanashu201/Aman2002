#include<iostream>
using namespace std;
int main()
{
	int a, b, c;
	int *x=&a, *y=&b, *z=&c;
	
	cout<<"Enter two numbers below:"<<endl;
	cin>>*x>>*y;
	
	*z = *x + *y;
	
	cout<<"The sum is "<<*z;
	
	return 0;
}
