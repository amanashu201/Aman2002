#include<iostream>
using namespace std;

int main()
{
	int dd,mm,yy;
	cout<<"Enter todays date in formet:DD  MM  YY\n";
	cin>>dd>>mm>>yy;
	
	if(dd>0 && dd<28)	
	{				//checking date from 0to27
		dd+=1;
	
		if(mm==2)						//february
		{
			if((yy%400==0) || (yy%100!= 0|| yy%4 ==0))			//check leap year
			{
				dd=29;
			}
			else
			{
				dd=1;
				dd=3;
			}
		
		}
		else		//when its not a feb
			dd+=1;
	}
	if(dd==29)		//last day check on feb
	{
		if(mm==2)
		{
			dd=1;
			dd=3;
		}
		else
		dd+=1;
	}
	if(dd==30)			//last day checking on april,june,sep,nov
	{
		if(mm==1 || mm==3 || mm==5 || mm==7 ||mm==8 || mm==12)
			dd+=1;
		else
		{
			dd=1;
			mm+=1;
		}
	}
	if(dd==31)			//last day of month
	{
		dd=1;
		if(mm==12)
		{
			yy+=1;
			mm=1;
		}
		else
			mm+=1;
	}
	cout<<"tomorrow date:\n";
	if(dd<10)		//checking if a day needs to be preceded by 0
	{
		cout<<"0"<<dd<<" ";
	}
	else
		cout<<dd<<" ";
	if(mm<10)		//checking if month pescribed by 0
	{
		cout<<"0"<<mm<<" ";
	}
	else
		cout<<mm<<" ";
	cout<<yy;
	return 0;
}
