/*write a program on library*/

#include<stdio.h>
#include<string.h>

struct library
{
	char libname[50];
	char name[20];
	char booksname[30];
	int totalbooks;
	float bookcharge;	
}lib;
void main()
{
	struct library lib;
	int i, totalbooks,ch;
	float libcharge;
	char libname[50];
	char biodata[20];
	
	printf("enter library name\n:");
	scanf("%s",libname);
	
	printf("what do you want to do:\n");
	printf("1.please enter your bio data\n:");
	printf("2.total nuber of books in library:");
	printf("3.enter book name\n:");
	printf("4.read to pay book charge\n:");
	printf("please enter your choice\n:");
	getchar();
	switch(ch)

	{
	case 1:
		bio();
		menu();
	case 2:
		totalbooks();
		menu();
	case 3:
		bookname();
		menu();
	case 4:
		paycharge();
		menu();
	default:
		printf("press any kyey to continue\n:");
	}
void biodata()
{
	
		char name[20];
	int i=0;
	
	printf("Please enter a name: ");
	scanf("%[^\n]", name);
	printf("please enter your address:");
	scanf("%[^\n]",adress);
	printf("please enter your pasword:");
	scanf("%[^\n]",pasward);
	
	while(name[i]!='\0')
	{
		if(name[i] == 'name' || address[i] == 'address' || pasword[i] == 'pasward')
		{
			biodata++;
			i++;
		}
		else
		{
			i++;
		}
	}
	printf("compleate your biodata %d\n",biodata);
}
	
