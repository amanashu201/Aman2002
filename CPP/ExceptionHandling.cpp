#include<iostream>
using namespace std;
int main()
{
	int a, b, c, x;
	
	cout<<"Enter the value of a, b, c below:"<<endl;
	cin>>a>>b>>c;

	try
	{
		if(b!=c)
		{
			x = a/(b-c);
	
			cout<<"The value of x is "<<x;
		}
		else
		{
			throw(x);	
		}
	}
	catch(int i)
	{
		cout<<"Division by zero occured!";
	}
	
	cout<<endl<<"Aal is well!";
	return 0;
}

/*
	preprocessor directive do not end with semicolon
*/
