#include<iostream>
#include<cstring>

void menu();
void sa_menu();

using namespace std;
class account
{
	char name[30];
	int accountnum;
	string accounttype;
public:
	
	void getdata(string actype)
	{
		cout<<"Enter accounts details"<<endl;
		cout<<"Customer Name :";
		getchar();
		gets(name);
		cout<<"Account number :";
		cin>>accountnum;
		accounttype = actype;
	}
	void putdata()
	{
		cout<<"Name: "<<name<<endl;
		cout<<"Account number: "<<accountnum<<endl;
		cout<<"Account type: "<<accounttype<<endl;
	}
};

class currentacct : public account
{
	float balance, amount;
	
public:
	void getdata()
	{
		account :: getdata("CA");
		cout<<"Account Balance :";
		cin>>balance;
	}
	void deposit()
	{
		cout<<"Please enter amount you withdrawl :";
		cin>>amount;
		
		balance=balance-amount;
	}
	void withdraw()
	{
		cout<<"Please enter amount you withdrawl :";
		cin>>amount;
	
		if(amount > balance)
		cout<<"Please select velid amount balance";
		else
		balance=balance-amount;

	}
	void putdata()
	{
		account::putdata();
		cout<<"Account Bailance: "<<balance<<endl;
	}
};

class sevingacct : public account
{
	float balance, amount,add_money;
	
public:
	void getdata()
	{
		account :: getdata("SA");
		cout<<"Account Balance :";
		cin>>balance;
	}
	void deposit()
	{
		cout<<"Please enter amount you withdrawl :";
		cin>>amount;
		
		balance=balance-amount;
	}
	void addmoney()
	{
		cout<<"Enter money to add in your bank account:";
		cin>>add_money;
		
		balance=balance+amount;
	}
	void withdraw()
	{
		cout<<"Please enter amount you withdrawl :";
		cin>>amount;
	
		if(amount > balance)
		cout<<"Please select velid amount balance";
		else
		balance=balance-amount;
	}
	void intrest()
	{
		float i;
		cout<<"Intrest in your account:";
		
		i = (amount*4*365)/100;
	}
	void putdata()
	{
		account::putdata();
		cout<<"Account Bailance: "<<balance<<endl;

	}		
}sv;

void sa_menu()
{
	//sevingacct sv;
	int ch;
	cout<<"Select an option:"<<endl;
	cout<<"1. Enter customer details"<<endl;
	cout<<"2. Deposit amount"<<endl;
	cout<<"3. Withdraw amount"<<endl;
	cout<<"4. Calculate interest"<<endl;
	cout<<"5. Display balance"<<endl;
	cout<<"6. Back"<<endl;
	cout<<"Enter your choice: ";
	cin>>ch;
	
	switch(ch)
	{
		case 1:
			sv.getdata();
			sa_menu();
			break;
		case 2:
			sv.deposit();
			sa_menu();
			break;
		case 3:
			sv.withdraw();
			sa_menu();
			break;
		case 4:
			sv.intrest();
			sa_menu();
			break;
		case 5:
			sv.putdata();
			sa_menu();
			break;
		case 6:
			menu();
			break;
		default:
			cout<<"Invalid option!"<<endl;
			sa_menu();
	}
}
void menu()
{
	int ch;
	cout<<"Select an option:"<<endl;
	cout<<"1. Savings Account"<<endl;
	cout<<"2. Current Account"<<endl;
	cout<<"Enter your choice: ";
	cin>>ch;
	
	switch(ch)
	{
		case 1:
			sa_menu();
			menu();
			break;
		default:
			cout<<"Invalid Option!"<<endl;
			menu();		
	}
}
int main()
{
	menu();
	
	return 0;
}

