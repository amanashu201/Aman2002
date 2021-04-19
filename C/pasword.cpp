#include<stdio.h>

int main()
{
	int i;
	char pasword[10];
	char username[20];
	char ch;
	
	printf("Enter user name:");
	scanf("%s",username);
	
	printf("Enter pasword on any 10 charectors:");
	for(i=0;  i<10;  i++)
	{
		ch=getchar();
		pasword[i]=ch;
		ch = '*';
		printf("%c",ch);
	}
	pasword[i]='\0';
	
	printf("\n your password is :");
	for(i=0; i<10; i++)
	{
		printf("%c",pasword[i]);
	}
	
}
