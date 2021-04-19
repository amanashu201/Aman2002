#include<iostream>

using namespace std;

int main()
{
	int a;
	float b = 65.6;
	char c;	
	
	a = b;
	c = b;
	
	cout<<"a="<<a<<endl;
	cout<<"b="<<(int)b<<endl;
	cout<<"c="<<int(c)<<endl;
	
	return 0;
}
