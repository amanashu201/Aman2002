/*Files updating random files*/
#include<iostream>
#include<fstream>
#include<iomanip>

using namespace std;
class INVENTRY
{
	char name[10];
	int code;
	float cost;
public:
	void getdata(void)
	{
		cout <<"Enter Name:";
		cin >>name;
		cout <<"Enter Code:";
		cin >>code;
		cout <<"Enter Cost:";
		cin >>cost;
	}
	void putdata(void)
	{
		cout <<setw(10)<<name <<setw(10)<<code <<setpricision(2)<<setw(10)<<cost<<endl;
	}
	
};
int main()
{
	INVENTORY item;
	fstream inoutfile;
	
}
