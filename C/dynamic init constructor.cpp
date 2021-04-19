/*dynamic initilialization of  constructors*/
//long term fixed deposit system

#include<iostream>
using namespace std;
class fixed_deposit
{
	long int p_amount;
	int years;
	float rate;
	float r_value;
public:
	
	fixed_deposit()
	fixed_deposit(long int p,int y,float r=0.12);
	fixed_deposit(long int p,int y,int r);
	void display(void);
};
fixed_deposit::fixed_deposit(long int p,int y,float r)
{
	p_amount=p;
	year=y;
	rate=r;
	r_value=p_amount;
	for(int i=1; i<=y; i++)
		r_value=r_value*(1.0+r);
}
fixed_deposit::fixed_deposit(long int p,int y,int r)
{
	p_amount=p;
	year=y;
	rate=r;
	r_value=p_amount;
	
	for(int i=1; i<=y; i++)
		r_value=r_value*(1.0+float(r)/100);		
}
void fixed_deposit::display(void)
{
	cout<<"\n"
		<<"principal amount="<<p_
		<<"return value="<<
}
