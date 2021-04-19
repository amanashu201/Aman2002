#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
	int height, base;
	float area;
	
	cout<<"enter height of traingle:";
	cin>>height;
	
	cout<<"enter base of traingle:";
	cin>>base;
	
	area = (base*height)/2;
	cout<<"area of traingle is "<<area;
	
	return 0;
}
