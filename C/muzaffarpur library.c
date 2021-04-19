#include<stdio.h>
#include<string.h>

struct library
{
   int ISBN,price,quantity,id;
   char book_name[100],author[100],info[5000];
   char read[5000];
}lib[100];
void library_book();
void book_information();
void book_stock();
void Know_about_book();
void book_add();
void delete_book();
void change_book_details();
int main()
 {
   int i,j,choice,number=0,c;
   for(i=0;i<100;i++)
 {
    lib[i].ISBN=0;
    lib[i].price=0;
    strcpy(lib[i].book_name,"");
    strcpy(lib[i].author,"");
    strcpy(lib[i].info,"");
 }
   lib[0].ISBN=1;
   lib[0].price=120;
   strcpy(lib[0].book_name,"let us c");
   strcpy(lib[0].author,"balaguruswamy");
   strcpy(lib[0].info,"Best book for computer science");
   do{
   printf("Enter\n1 - Library books");
   printf("\n2 -Book information");
   printf("\n3 - Stock of book in Store");
   printf("\n4 -you know about books Information");
   printf("\n5 - Add books in library");
   printf("\n6 - Delete books in library");
   printf("\n7 - Change books details\n");
   scanf("%d",&choice);
   switch(choice)
   {
    case 1:
    {
     library_book();
     break;
    }
     case 2:
    {
     book_information();
     break;
    }
      case 3:
      {
       book_stock();
       break;
      }
      case 4:
      {
       Know_about_book();
       break;
      }
      case 5:
      {
       ++number;
       book_add();
       break;
      }
      case 6:
      {
       delete_book();
       break;
      }
      case 7:
      {
       Change_book_details();
       break;
      }
   }
     printf("To Continue with other Options Enter 1 Else any other number\n");
     scanf("%d",&c);
   }while(c==1);
   
 }
 void library_book()
 {
  int id,check,i,number;
  char name[100],read[200];
  printf("Enter 1 if you know ID else any other number to enter Name of Medicine\n");
  scanf("%d",&check);
  if(check==1)
  {
   printf("Enter Id to read book\n");
   scanf("%d",&id);
   for(i=0;i<number;i++)
   {
    if(lib[i].id==id)
    {
     int c;
     printf("These are the details of library\n");
     printf("Name%s\nauthor=%s\nbook information =%d\nISBN=%d\n",lib[i].book_name,lib[i].author,lib[i].info,lib[i].ISBN);
      if(strcmp(lib[i].info,"")==0)
      {
       printf("library books Review/Info=Not Available\n");
      }
      else
      {
       printf("library book Review/Info=%s\n",lib[i].info);
      }
     printf("Do you want to read book %s \nIf Yes Enter 1 else any other number\n",lib[i].book_name);
     scanf("%d",&c);
     if(c==1)
     {
      printf("Enter information to read book\n");
      scanf("%s",read);
      if(lib[i].read>read)
      {
       printf("Total Price to be paid for book read=%s\n",lib[i].book_name);
      }
      else{
       printf("Please Enter book below Available book\n");
      }
     }
     break;
    }
   }
   if(id==0)
   {
    printf("Entered Id Not Found\n");
   }
  }
  else
  {
   printf("Enter Name of book to search read and Purchase\n");
   gets(name);
   for(i=0;i<number;i++)
   {
    if(strcmp(lib[i].book_name,name)==0)
    {
     int c;
     printf("These are the details of library\n");
     printf("Name%s\nauthor=%s\nbook information =%d\nISBN=%d\n",lib[i].book_name,lib[i].author,lib[i].info,lib[i].ISBN);
      if(strcmp(lib[i].info,"")==0)
      {
       printf("books Review/Info=Not Available\n");
      }
      else
      {
       printf("books review/Info=%s\n",lib[i].info);
      }
     printf("Do you want to purchase book %s \nIf Yes Enter 1 else any other number\n",lib[i].book_name);
     scanf("%d",&c);
      if(c==1)
     {
      printf("Enter information to read book\n");
      scanf("%s",read);
      if(lib[i].read>read)
      {
       printf("Total Price to be paid for book read=%s\n",lib[i].book_name);
      }
      else{
       printf("Please Enter book below Available book\n");
      }
     }
     break;
    }
   }
   if(id==0)
   {
    printf("Entered book Name Not Found\n");
   }
  }
 }



