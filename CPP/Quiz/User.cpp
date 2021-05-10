#include "Start.cpp"
#include<iostream>
#include<fstream>
using namespace std;
class user
{
private:
	string full_name;
	string user_id;
	string pass;
	string c_pass;
	string dob;
	string role;
public:
	void new_user();
	void authenticate();
};

void user:: new_user()
{
	ofstream fout("user.001", ios::app);
	cout<<"User Full Name: ";
	getline(cin, full_name);
	cout<<"User Id: ";
	cin>>user_id;
	cout<<"Password: ";
	cin>>pass; 
	cout<<"Confirm Password: ";
	cin>>c_pass     ;
	cout<<"Enter Date of Birth: ";
	cin>>dob;
	cout<<"Role: ";
	cin>>role;
	
	if(pass == c_pass)
	{
		fout<<full_name<<","<<user_id<<","<<pass<<","<<dob<<","<<role<<","<<endl;	
	}
	else
	{
		cout<<"Password and confirm password does not match. Please retry!";
	}
}
void user::authenticate()
{
	user t;
	ifstream fin("user.001");
	cout<<"Enter user id: ";
	cin>>user_id;
	cout<<"Enter password: ";
	cin>>pass;
	
	getline(fin,t.full_name,',');
	getline(fin,t.user_id,',');
	getline(fin,t.pass,',');
	
	if(user_id == t.user_id && pass == t.pass)
	{
		start s;
		s.main_menu();
	}
	else
	{
		cout<<"Login Failed!";
	}
}
