#include<iostream>
#include<stdio.h>

using namespace std;
class holiday
{
private:
	int day;
	int month;
	int first_year;
	char name[30];
	char occasion[50];
public:
	void Holiday_list();
	void Display_Holiday();
};

void holiday:: Holiday_list()
{
	cout<<"enter day:";
	cin>>day;
	getchar();
	cout<<"enter month:";
	cin>>month;
	getchar();
	cout<<"enter first year:";
	cin>>first_year;
	getchar();
	
	cout<<"enter name:";
	gets(name);
	getchar();
	
	cout<<"enter ocassion:";
	gets(occasion);		
}
void holiday::Display_Holiday()
{
	cout<<"day: "<<day<<endl;
	cout<<"month:"<<month<<endl;
	getchar();
	cout<<"first year:"<<first_year<<endl;
	cout<<"name:"<<name<<endl;
	cout<<occasion<<occasion<<endl;
}
int main()
{
	holiday h;				//Creating object h
	
	h.Holiday_list();
	h.Display_Holiday();
	
	return 0;
}



