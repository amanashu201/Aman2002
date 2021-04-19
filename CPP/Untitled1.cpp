#include<stdio.h>
#include<stdlib.h>
void menu();
void write();
void read();

int main()
{
	menu();
	return 0;
}

void menu()
{
	int ch;
	printf("\nWhat do you want to do:\n");
	printf("1. Write to a file\n");
	printf("2. Read from a file\n");
	printf("3. Exit\n");
	printf("Enter your choice: ");
	scanf("%d", &ch);
	getchar();
	switch(ch)
	{
		case 1:
			write();
			menu();
		case 2:
			read();
			menu();
		case 3:
			exit(0);
		default:
			printf("Invalid option! Please retry!\n");
	}
}

