#include<stdio.h>

void getlibrary();

struct library
{
	char libraryname[20];
	char studentname[20];
	char bookname[20];
	float bookprice,fine;
	
}admin;

int main()
{
	getlibrary();
	return 0;
}
void getlibrary()
{
	file *fp;
	fp = fopen("library.text","a");
	printf("enter student name:");
	scanf("%[^\n]",admin.studentname);
	fprintf(fp,"%[^\n],",admin.studentname);
	
	printf("enter book name:");
	scanf("%[^\n]",admin.bookname);
	fprintf(fp,"%[^\n],",admin.bookname);
	
	printf("enter book price:");
	scanf("%f",admin.bookprice);
	fprintf(fp,"%f",admin.bookprice);
}
