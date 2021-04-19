#include<iostream>

using namespace std;
void test(int x)
{
	try
	{
		if(x==1) throw x;
		else
			if(x==0) throw 'x';
		else
			if(x==-1) throw 1.0;
	}
	catch(...)	//catch 1
	{
		cout<<"Caught  an exception"<<endl;
	}
}
int main()
{
	cout<< "Testing multiple catches"<<endl;
	test(1);
	test(0);
	test(-1);
	
	return 0;
}
