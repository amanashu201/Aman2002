#include<iostream>
using namespace std;

class person
{
protected:
	char name[20];
	int code;
public:
	void getdata()
	{
		cout<<"Enter person details"<<endl;
		cout<<"person Name :";
		getchar();
		gets(name);
		cout<<"Enter code :";
		cin>>code;
		
	}
	void putdata()
	{
		cout<<"Person Name: "<<name<<endl;
		cout<<"Person Code: "<<code<<endl;
		
	}
};
class account : public person
{
protected:
	float pay;
public:
	void getdata()
	{
		account :: getdata();
		cout<<"Enter paying amount:";
		cin>>pay;
	}
	void putdata()
	{
		cout<<"Pay amount : "<<pay<<endl;
	}
};
class admin : public  person
{
protected:
	int experiment;
public:
	void getdata()
	{
		account ::getdata();
		cout<<"experimental data:";
		cin>>experiment; 
	}
	void putdata()
	{
		cout<<"Experiance : "<<experiment<<endl;
	}
};
class master : public account,public admin
{
public:
	
	void getdata()
	{
		
	}
	
	void putdata()
	{
		
	}

};

int main()
{
	master m1;

	m1.getdata(100,"aman");
	m1.putdata();

	return 0;
}
