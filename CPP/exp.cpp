#include<iostream>
using namespace std;

int main()
{
	
	char par[200],word[20];
	int i=0 , c=0;
	
	cout<<"Enter a paragraph";
	gets(par);
	
	cout<<"Enter word search:";
	gets(word);
	
	while(par[i]!='0')
	{
		if(par[i]==word[c] && word[c]!='\0')
		{
			c++;
		
		}
		else(c=0);
		i++;
	}
}
