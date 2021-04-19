#include<stdio.h>
#include<stdlib.h>
void menu();
void input();
void read();
void book_menu();
void new_book();
void search_book();
void book_list();
//void book();
void member();
void issue();
//void library_list();
//void book_code();
//void book_title();


struct library
{	
	char book_name[20];
	char issue[20];
	int book_code,bt,ISBN;
	char Member[20];
	char Any_issue[50];
	char read[20];
}lib;


int main()
{
	menu();
	return 0;
}

void menu()
{
	char ch;
	printf("\nWhat do you want to do in library:\n");
	printf("1.read library data:\n");
	printf("2.Cheak your membership:\n");
	printf("3.Any type of issue:\n");
	printf("4.Exit:\n");
	printf("Enter your choice: ");
	scanf("%d", &ch);
	getchar();

	switch(ch)
	{
		case 1:
			read();
			menu();
			break;
		case 2:
			member();
			menu();
			break;
		case 3:
			issue();
			menu();
			break;
		case 4:
			exit(0);
			break;
		default:
			printf("Invalid option! Please retry!\n");
			menu();
	}
}
void input()
{
	FILE *fp;
	char book_name[20];
	char ch;
	fp = fopen("library.text","a");
	printf("Please enter a book name: ");
	scanf("%[^\n]", &lib.book_name);
	fprintf(fp, "%d,", lib.book_name);
	printf("Please enter another issue: ");
	scanf("%[^\n]", &lib.issue);
	fprintf(fp,"%d,",lib.issue);
	fclose(fp);
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

void book()
{

	FILE *fp;
	int book_code,ISBN;
	char bt[20];
	char ch;
	fp = fopen("library.text","a");
	printf("1. read book\n");
	scanf("%d", &lib.book_code);
	fprintf(fp, "%d,", lib.book_code);
	getchar();
	printf("Enter book title.\n");
	scanf("%[^\n]", &lib.bt);
	fprintf(fp, "%d,", lib.bt);
	getchar();
	printf("Enter book ISBN.\n");
	scanf("%d", &lib.ISBN);
	fprintf(fp, "%d,", lib.ISBN);
	getchar();
	switch(ch)
	{
		case 1:
			read();
			book();
			break;
		case 2:
			member();
			break;
		case 3:
			issue();
			break;
		case 4:
			exit(0);
			break;
		default:
			printf("Invalid option! Please retry!\n");
			menu();
	}
	fclose(fp);
}


void read()
{
	FILE *fp;
	fp = fopen("library.text","a");
	printf("Please say what do you want to read: ");
	scanf("%[^\n,]",lib.read);
	fprintf(fp, "%[^\n],", lib.read);

	fclose(fp);
}

void member()
{
	FILE *fp;
	int i,l;
	fp = fopen("library.text","a");
	printf("Please enter your member ship date: ");
	scanf("%[^\n]",lib.Member);
	fprintf(fp, "%[^\n],", lib.Member);
	
	while(lib.Member[i]!='\0')
	{
		if(lib.Member[i]!=' ')
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
	fclose(fp);

}
void issue()
{
	char any_issue[50];
	FILE *fp;
	fp = fopen("library.text","a");
	printf("Please say your problem: ");
	scanf("%[^\n]",lib.Any_issue);
	fprintf(fp, "%[^\n],", lib.Any_issue);
	fclose(fp);
}

void library_List()
{
	FILE *fp;
	fp = fopen("library.txt","r");
	
	printf("%10s%10s%10d%15d%30s%40s\n","Book_name","read", "ISBN", "book_code","Member", "Any_issue");
	printf("-----------------------------------------------------------------------------------------------------------\n");
	
	while(fscanf(fp, "%s,%[^,]%d,%d,%[^,],%[^\n]", &lib.book_name, &lib.read, &lib.ISBN, &lib.book_code, lib.Member, lib.Any_issue) != EOF)
	{
		printf("%10s%10s%10d%15s%30s%40s\n", lib.book_name, lib.read, lib.ISBN, lib.book_code, lib.Member, lib.Any_issue);
		
		if(feof(fp))
			break;
	}
	printf("-----------------------------------------------------------------------------------------------------------\n");
	
	fclose(fp);
}

