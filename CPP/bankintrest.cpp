#include<iostream>

using namespace std;

class Loan
{
	float amount, rate, time, i;
  public:
  	void getdata()
  	{
  		cout<<"Home Lone Amount: ";
  		cin>>amount;
 
 		 cout<<"Intrest Rate: ";
  		cin>>rate;
 
  		cout<<"Loan Tenure: ";
  		cin>>time;
  
  		i = (amount * rate * time) / 100;
  		cout<<"EMI Intrest: "<<i;
  
	}
};
int main() 
{
	Loan l;
	l.getdata();
  
}
