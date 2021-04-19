#include<stdio.h>

int main()
{
	char str[50];
	int i=0;
	
	printf("Please enter a string: ");
	scanf("%[^\n]",str);
	
	while(str[i]!='\0')
	{
		i++;
	}
	
	
	
	printf("\nThe string %s has %d characters.\n",str,i);

	return 0;
}


int mystrlen(int *str)
{
	
}
