#include<stdio.h>
#include<stdlib.h>
void menu();
void bookmenu();
void membermenu();
void new_book();
void book_list();
void search_book();
void member();
void search_book_code();

struct book
{
	char book_code[4];
	char book_title[25];
};

int main()
{
	menu();
	return 0;
}

void menu()
{
	int ch;
	printf("Select an option to continue:\n");
	printf("1. Inventory\n");
	printf("2. Member\n");
	printf("3. Exit\n");
	printf("Enter your choice: ");
	scanf("%d", &ch);
	
	switch(ch)
	{
		case 1:
			bookmenu();
			menu();			//Recursion
			break;
		case 2:
			//membermenu();
			menu();
			break;
		case 3:
			exit(0);
			break;
		default:
			printf("Invalid option!please retry!\n");
			menu();
	}
}

void bookmenu()
{
	int ch;
	printf("Select an option to continue:\n");
	printf("1. New Book\n");
	printf("2. Search Book\n");
	printf("3. Book List\n");
	printf("4. Back\n");
	printf("Enter your choice: ");
	scanf("%d", &ch);
	
	switch(ch)
	{
		case 1:
			new_book();
			bookmenu();
			break;
		case 2:
			search_book();
			bookmenu();
			break;
		case 3:
			book_list();
			bookmenu();
			break;
		case 4:
			menu();
			break;
		default:
			printf("Invalid option! please retry!\n");
	}
}

void new_book()
{
	struct book b;
	FILE *fp;
	fp = fopen("Book.001","a");
	
	printf("Enter book code: ");
	scanf("%s", b.book_code);
	fprintf(fp,"%s,",b.book_code);
	getchar();
	printf("Enter book title: ");
	scanf("%[^\n]", b.book_title);
	fprintf(fp,"%s\n",b.book_title);
	
	fclose(fp);
	printf("Book added to inventory!\n");
}

void book_list()
{
	FILE *fp;
	struct book b;
	fp = fopen("Book.001","r");
	
	printf("%-12s%-30s\n","Book Code","Book Title");
	
	while(fscanf(fp,"%s,%[^\n]",b.book_code,b.book_title)!=EOF)
	{
		printf("%-12s%-30s\n", b.book_code, b.book_title);
	}
	fclose(fp);
}

void search_book()
{
	int ch;
	printf("Search by criteria:\n");
	printf("1. Book Code\n");
	printf("2. Book Title\n");
	printf("3. Book ISBN\n");
	printf("Enter you choice: ");
	scanf("%d", &ch);
	
	switch(ch)
	{
		case 1:
			search_book_code();
			break;
		case 2:
			break;
		default:
			printf("Invalid option! please retry!");
	}
	
}

void search_book_code()
{
	struct book b;
	printf("Enter Book code: ");
	scanf("%s", b.book_code);
	
	
}
