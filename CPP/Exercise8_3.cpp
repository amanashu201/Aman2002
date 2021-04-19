#include<iostream>

using namespace std;

class staff
{
	char code[5];
	char name[30];
public:
	void getdata()
	{
		cout<<"Enter code: ";
		cin>>code;
		cout<<"Enter Name: ";
		cin>>name;
	}
	void putdata()
	{
		cout<<"Code: "<<code<<endl;
		cout<<"Name: "<<name<<endl;
	}
};

class teacher : public staff
{
	char subject[20];
	char publication[20];	
	
public:
	void getdata()
	{
		staff::getdata();
		cout<<"Enter Subject: ";
		cin>>subject;
		cout<<"Enter publication: ";
		cin>>publication;
	}
	void putdata()
	{
		staff::putdata();
		cout<<"Subject: "<<subject<<endl;
		cout<<"Publication: "<<publication<<endl;
	}
};

class typist : public staff
{
	int speed;
public:
	void getdata()
	{
		staff::getdata();
		cout<<"Enter your typing speed:";
		cin>>speed;
	}
	
};

class officer : public staff
{
	char grade;
public:
	void getdata()
	{
		staff::getdata();
		cout<<"Enter grade: ";
		cin>>grade;
		
	}
	void putdata()
	{
		staff::putdata();
		cout<<"grade: "<<grade<<endl;
	}
};

class regular : public typist
{
		char regular;
public:
	void getdata()
	{
		staff::getdata();
		cout<<"regularity: ";
		cin>>regular;
		
	}
	void putdata()
	{
		staff::putdata();
		cout<<"regular: "<<regular<<endl;
	}
};

class casual : public typist
{
	float daily_wages;
public:
	void getdata()
	{
		staff::getdata();
		cout<<"your daily wages money: ";
		cin>>daily_wages;
		
	}
	void putdata()
	{
		staff::putdata();
		cout<<"Daily Wages: "<<daily_wages<<endl;
	}
};
int main()
{
	teacher t;
	typist ti;
	officer of;
	t.getdata();
	t.putdata();
	ti.getdata();
	ti.putdata();
	of.getdata();
	of.putdata();
	
	return 0;
}
