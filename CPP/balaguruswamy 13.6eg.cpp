#include<iostream>

using namespace std;
void test(int x) throw(int,double)
{
		if(x==0) throw 'x';
		else
			if(x==1) throw x;
		else
			if(x==-1) throw 1.0;
		cout<< "End of function block"<<endl;
}
int main()
{
	try
	{
	cout<< "Testing throw restrictions"<<endl;
	cout<< "x== 0"<<endl;
	test(0);
	cout<< "x== 1"<<endl;
	test(1);
	cout<< "x== -1"<<endl;
	test(-1);
	cout<< "x== 2"<<endl;
	test(2);
	}
	catch(char c)	//catch 1
	{
		cout<<"Caught  a character"<<endl;
	}
	catch(int m)	//catch 2
	{
		cout<<"Caught  an integer "<<endl;
	}
	catch(double d)	//catch 3
	{
		cout<<"Caught  a double"<<endl;
	}
	cout<<"End of try-catch system"<<endl<<endl;
	
	return 0;
}
