#include<iostream>
#include<cstdlib>
#include<fstream>

using namespace std;

void main_menu();

class Customer
{
	string cid;
	string title;
	string fname;
	string mname;
	string lname;
	string dob;
	string gender;
	
public:
	void customer_menu();
	void new_customer();
	void edit_customer();
	void delete_customer();
};

class Account
{
	string account_no;
	string cid;
	string account_type;
	float min_bal;
	int int_frequency;
	
public:
	void account_menu();
	void new_account();
	void edit_account();
	void delete_account();
	void marks_dormant();
	void pay_interest();
	void check_min_balance();
	void balance_enquiry();
	void print_passbook();
};

void Customer :: customer_menu()
{
	int ch;
	system("cls");
	cout<<"Customer Menu"<<endl;
	cout<<"1. New Customer"<<endl;
	cout<<"2. Edit Customer"<<endl;
	cout<<"3. Delete Customer"<<endl;
	cout<<"4. Back"<<endl;
	cout<<"Enter choice: ";
	cin>>ch;
	switch(ch)
	{
		case 1:
			new_customer();
			customer_menu();
			break;
		case 2:
			edit_customer();
			customer_menu();
			break;
		case 3:
			delete_customer();
			customer_menu();
			break;
		case 4:
			system("cls");
			main_menu();
			break;
		default:
			system("cls");
			cout<<"Invalid Option!"<<cout;
			customer_menu();
	}
}
void Customer :: new_customer()
{
	ofstream fout("Customer.001");
	
	system("cls");
	cout<<"New Customer Form"<<endl<<endl;
	cout<<"Title: ";
	cin>>title;
	fout<<title;
	cout<<"First Name: ";
	cin>>fname;
	fout<<fname;
	cout<<"Middle Name: ";
	cin>>mname;
	fout<<mname;
	cout<<"Last Name: ";
	cin>>lname;
	fout<<lname;
	cout<<endl<<"New customer created! Press any key to continue...";
}

void Customer :: edit_customer()
{
	
}

void Customer :: delete_customer()
{
	
}

void Account :: account_menu()
{
	
	
}

void main_menu()
{
	Customer cus;
	Account ac;
	int ch;
	system("cls");
	cout<<"Main Menu"<<endl;
	cout<<"1. Customer Management"<<endl;
	cout<<"5. Exit"<<endl;
	cout<<"Enter choice: ";
	cin>>ch;
	switch(ch)
	{
		case 1:
			cus.customer_menu();
			main_menu();
			break;
			
		case 5:
			exit(0);
		default:
			system("cls");
			cout<<"Invalid choice!";
			main_menu();
	}
}

int main()
{
	//sleep(5);
	//delay(5000);
	main_menu();
	return 0;
}

