#include<iostream>
#include<string.h>

using namespace std;
int main()
{
	int i,j,l=0;
	char str[50],temp;
	
	cout<<"enter a string:";
	gets(str);
	
	while(str[l]!='\0')
	{
		l++;	
	}
	
	j=l;
	for(i=0; i<=(l-1)/2; i++)
	{
		temp=str[i];
		str[i]=str[j-1-i];
		str[j-1-i]=temp;
	}
	cout<<"reverse string is:"<<str;
	return 0;
}
