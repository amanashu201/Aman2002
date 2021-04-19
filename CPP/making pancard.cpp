#include <iostream>
//#include <cstdlib>
//#include <string>
#include <sstream>

using namespace std;

class Customer
{
	public:
		Customer (); 
		void set_name ();
		string get_name () const;
		void set_account_number ();
		string get_account_number () const;
		
	private:
		static int number_of_accounts_created;
		string customer_fullname;
		string account_number;
		double balance;
		double deposit;
		double withdrawl;
		double interest;
};

Customer::Customer ()
{
    number_of_accounts_created++;               
}
void Customer::set_name()
{
	string first_name, last_name;
	cout << "Please enter new customer's first name: ";
	cin >> first_name;
	cout << "Please enter new customer's last name: ";
	cin >> last_name;
	customer_fullname = first_name + " " + last_name;	
}
string Customer::get_name() const
{
	return customer_fullname;
}
void Customer::set_account_number ()
{
	int last_six_digits = 112280 + number_of_accounts_created;
	ostringstream convert;
	convert << last_six_digits;
	string first_two_digits = "00";
	account_number = first_two_digits + convert.str();
}
string Customer::get_account_number () const
{
	return account_number;
}

const int MAX = 1000;
Customer new_customer [MAX];


int main ()
{

    new_customer [0].set_name();
	new_customer [0].set_account_number();
	system ("CLS");
	cout << "Customer's Name: " << new_customer [0].get_name() << endl;
	cout << "Account number is: " << new_customer [0].get_account_number() << endl;
	
    system ("PAUSE");
    return 0;
}


