#include <stdio.h>
#include <conio.h>

struct biodata{
       int recno,age;
       char name[20],sex;
       float salary;
};


void main(){
     void addData(void);
     void delData(void);
     void showAll(void);
     void showRecord(void);
     void alterData(void);

     char choice;
     clrscr();

     while(1){
      clrscr();
      textcolor(BLACK);
      cprintf("         B I O - D A T A\r\n");
      printf("\n\n*****CHOOSE YOUR CHOICE*****\n");
      printf("1) ADD DATA\n");
      printf("2) DELETE DATA\n");
      printf("3) SHOW ALL\n");
      printf("4) SHOW RECORD\n");
      printf("5) ALTER DATA\n");
      printf("6) Exit \n");
      printf("Enter your choice : ");
      fflush(stdin);
      choice = getche();
      switch(choice){
         case'1' :   //call add data
                addData();
                break;
         case'2' :   //call delete databreak;
         case'3' :  //call show all data
                showAll();
                break;
         case'4' :  //call show record
                showRecord();
                break;
         case'5' :   //call alter databreak;
         case'6' :
         case 27  :     clrscr();
                gotoxy(25,10);
                _setcursortype(_NOCURSOR);
                textcolor(LIGHTMAGENTA);
                cprintf("THANKS FOR USING THIS SOFTWARE");
                getch();
                exit(1);
      }
     }

}


//Adding Record to Filevoid addData(){
     FILE *fp;
     struct biodata obj;
     fp = fopen("biodata.txt","a+t");
     clrscr();
     printf("\n*****ADDING DATA*****\n");
     printf("\nEnter Record No : ");
     scanf("%d",&obj.recno);
     printf("Enter Name : ");
     fflush(stdin);
     scanf("%s",obj.name);
     printf("Enter age : ");
     scanf("%d",&obj.age);
     fflush(stdin);
     printf("Enter Sex : ");
     scanf("%c",&obj.sex);
     printf("Enter Salary : ");
     scanf("%f",&obj.salary);
     fscanf(stdin,"%d %s %d %c %f",&obj.recno,obj.name,&obj.age,&obj.sex,&obj.salary);
     fprintf(fp,"%d %s %d %c %f",obj.recno,obj.name,obj.age,obj.sex,obj.salary);
     fclose(fp);
}

void showRecord(){
     FILE *fp;
     struct biodata obj;
     int rec;
     long pos;
     fp = fopen("biodata.txt","r");
     clrscr();
     printf("\n*****SHOWING SPECIFIC RECORD*****\n");
     printf("\nEnter Record No : ");
     scanf("%d",&rec);
     pos = rec * sizeof(obj);
     fseek(fp,pos,SEEK_SET);
     if(feof(fp)==0)
    printf("\n\nNO DATA FOUND\n");
     else{
     fscanf(fp,"%d %s %d %c %f",&obj.recno,obj.name,&obj.age,&obj.sex,&obj.salary);
     printf("\n\n\tRecord No :  %d\n",obj.recno);
     printf("\tName : %s\n",obj.name);
     printf("\tAge  : %d\n",obj.age);
     printf("\tSex  : %c\n",obj.sex);
     printf("\tSalary : %f\n",obj.salary);
     }
     getch();
     fclose(fp);
}
