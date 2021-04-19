#include<iostream>

using namespace std;

class student
{
	int rollno;
	string name;
public:	
	student()
	{
		rollno = 1;
		name = "Aman Kumar";
	}
	virtual void display()
	{
		cout<<"Roll No: "<<rollno<<endl;
		cout<<"Name: "<<name<<endl;	
	}
};
class btech : public student
{
	string internship;
public:	
	btech()
	{
		internship = "Infosys";
	}
	void display()
	{
		cout<<"Internship: "<<internship<<endl;
	}
};
class bca : public student
{
	string project;
public:
	bca()
	{
		project = "Library Management System";
	}
	void display()
	{
		cout<<"Project: "<<project<<endl;
	}
};
int main()
{
	student s, *b;
	btech bt;
	bca bc;
	
	b = &s;
	b->display();
	b=&bt;
	b->display();
	b=&bc;
	b->display();
	
	return 0;
}
