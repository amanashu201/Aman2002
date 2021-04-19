#include<iostream>
#include<stdio.h>
#include<string.h>

using namespace std;

class bank
{
		char name[50];
		char account_type[50];
		char cousrmer[10];
        int acount_number;
        float balance;  
   public:
   		void ten_costumer();
        void deposit();
        void withdraw();
        void display();
};
void bank::ten_costumer()
{
	int i;
	for(i=0; i<10; i++)
	{
		cout<<"account name:";
	}
}
void bank::deposit()   //deposit amount
{
        int d_amount;
        cout<<"Enter Deposit Amount = ";
        cin>>d_amount;
        balance+=d_amount;

}
void bank::withdraw()  //withdrawl amount
{
        int w_amount;
        cout<<" Enter Withdraw Amount : ";
        cin>>w_amount;
        
        if(w_amount>balance)
        {
            cout<<" Cannot Withdraw Amount";
     	    balance-=w_amount;
     	}
}
void bank::display()  
{
        cout<<" ----------------------";
        cout<<" Accout No. : "<<acount_number<<endl;
        cout<<" Name : "<<name;
        
        cout<<" Account Type : "<<account_type<<endl;
        cout<<" Balance : "<<balance<<endl;  
}
int main()
{
        int account_number;
        char name[100];
		char account_type[100];
        float balance;
        cout<<" Enter Details: \n";
        cout<<"-----------------------";
        cout<<"\n Accout No. ";
        cin>>account_number;
        cout<<"\n Name : ";
        cin>>name;
        cout<<"\n Account Type : ";
        cin>>account_type;
        cout<<"\n Balance : ";
        cin>>balance;
        
  		bank b;
        b.deposit(); 
        b.withdraw(); 
        b.display(); 
        return 0;
}


