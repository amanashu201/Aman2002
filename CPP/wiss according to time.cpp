#include<iostream>

using namespace std;

int main()
{
	
	string name;
	int t;
    cout<<"please enter your name:\n";
    cin>>name;
	getchar();
    cout<<"Enter the time (1-24): ";
    cin>>t;
    cout<<"\n";
    if(t>0 && t<=3)
        cout<<"Good Night!" << name;
    else if(t>3 && t<12)
        cout<<"Good Morning!" << name;
    else if(t==12)
        cout<<"Good Noon!" << name;
    else if(t>12 && t<=15)
        cout<<"Good AfterNoon!" << name;
    else if(t>15 && t<20)
        cout<<"Good Evening!" << name;
    else if(t>=20 && t<=24)
        cout<<"Good Night!" << name;
    else
        cout<<"Unknown time!";
    
   
	return 0;
}
