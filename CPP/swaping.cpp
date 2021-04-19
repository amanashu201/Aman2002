#include<iostream>
using namespace std;

void swap(int&, int&);

int main()
{
	int sf,no,ano,t;
	cout<<"please enter a number:";
	cin>>no;
	
	cout<<"please enter another number:";
	cin>>ano;

	cout<<"The values of no and ano before swapping are "<<no<<" and "<<ano<<", respectively."<<endl;
	
	swap(no,ano);
	
	cout<<"The values of no and ano after swapping are "<<no<<" and "<<ano<<", respectively.";
	
	return 0;
}

void swap(int&a,int&b)
{
	int t;
	t=a;
	a=b;
	b=t;
}
