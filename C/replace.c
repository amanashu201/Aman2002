#include<stdio.h>

int main()
{
	char string[30];
	int i=0, l, t;
	
	printf("please enter a string: ");
	scanf("%[^\n]",string);
		for(i=0; i<=l/2; i++)
	{
		//Swapping
		t = string[i];
		string[i] = string[l-1-i];
		string[l-1-i] = t;
	}
	 
	printf("it is good to program in c %s.\n", string);
	
	return 0;	
}
