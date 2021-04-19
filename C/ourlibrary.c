#include<stdio.h>
#include<stdlib.h>

void menu();
void input();
void book();
void member();
void issue();

int bn, bc, bt, ISBN, i,i=0, l=0, iue;

struct book
{	
	int bn;
	int bc, bt, ISBN, i, l, iue;
};


int main()
{
	menu();
	return 0;
}

void menu()
{
	int ch;
	printf("\nWhat do you want to do in library:\n");
	printf("1.Read book\n");
	printf("2.Cheak your membership \n");
	printf("3.Any type of issue\n");
	printf("4.Exit\n");
	printf("Enter your choice: ");
	scanf("%d", &ch);
	getchar();
	switch(ch)
	{
		case 1:
			read();
			menu();
		case 2:
			member();
			menu();
		case 3:
			issue();
			menu();
		case 4:
			exit(0);
		default:
			printf("Invalid option! Please retry!\n");
			menu();
	}
	
}
void input()
{
	printf("Please enter a book name: ");
	scanf("%d", &bn);
	printf("Please enter another issue: ");
	scanf("%d", &iue);
}

void book()
{
	input();
	printf("Enter book code%d.\n",bc);
	getchar();
	printf("Enter book title%d.\n",bt);
	getchar();
	printf("Enter book ISBN%d.\n",ISBN);
}

void member()
{
	input();
	char member[50];
	printf("Please enter a member: ");
	scanf("%[^\n]",member);
	
	while(member[i]!='\0')
	{
		if(member[i]!=' ')
		{
			l++;
			i++;
		}
		else
		{
			i++;
		}
	}
	printf("member in library %s is %d.\n", member,l);

}

void issue()
{
	input();
	printf("please enter your issue%d.\n",iue);
		
}


