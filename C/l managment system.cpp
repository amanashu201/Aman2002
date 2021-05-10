#include<stdio.h>
#include<string.h>

struct libraryadministrator
{
	char adminname[20];
	char publisher[20];
	char worker[100];
	char bookname[30];
	char author[30];
	float price;
}admin;

int main()
{


	struct libraryadministrator admin;
	getchar;
	char publisher[30];
	int i=0,j=0,count=0,ch;
	
	printf("Library administrator\n");
  
	printf("1.all books information in library\n");
	printf("2.print books available in library \n");
	printf("3.print book list in library\n");
	printf("4.print author name\n");
	printf("5.print worker list\n");
	printf("6.book price\n");
	printf("7. Exit");	

	printf ("\nEnter one of the above:");
	scanf("%d",&i);
	getchar();
	switch(ch)
	{
		case 1:  

		printf ("Enter book name = ");
		scanf ("%s",admin.bookname);
	
		printf ("Enter publisher name = ");
		scanf ("%s",admin.publisher);

		printf ("Enter price = ");
		scanf ("%f",&admin.price);
		count++;

		break;
 		case 2:
		printf("Display All Books Available\n");
		for(i=0;i<count;i++)
		{
			printf ("\n book name = %s",admin.bookname);
	
			printf ("\t author name = %s",admin.publisher);

			printf ("\t  price = %f",admin.price);
		}
		break;

		printf ("Highest Price Book : ");
		float temp = 0;
		for (i=0;i<count;i++)
		{
	    	if(temp < admin.price)
	        temp = admin.price;
		}	
		printf("%f", temp);
	
		break;

 		case 4:
		printf ("List of Publishers : ");
		for (i=0;i<count;i++)
		{
		    printf ("\n %s ",admin.publisher);
		}
		break;
 		case 5:
		printf ("List of worker : ");
		for (i=0;i<count;i++)
		{
	    	printf ("\n %s ",admin.worker);
		}
		break;
 		case 6:
		{
		
		}	
		break;
}
return 0;

