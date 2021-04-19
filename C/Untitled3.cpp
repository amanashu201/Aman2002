#include <stdio.h>

char name[50];
int roll;
float marks;
 

void main() 
{
int i,n;
struct student s[100];

printf("Enter total of students:\n");
scanf("%d",&n);

for(i=0;i<n;i++)
{
printf("\n Enter information of student %d:\n",i+1);
printf("Enter name: ");
scanf("%s", s[i].name);
getchar();
printf("Enter roll number: ");
scanf("%d", &s[i].roll);
getchar();
printf("Enter marks: ");
scanf("%f", &s[i].marks);
}

printf("Displaying Information:\n");
for(i=0;i<n;i++)
{
printf("\n %d no. student info\n",i+1);
printf("\tName:%s\n ",s[i].name);
//or use
// puts(s[i].name);

printf("\t Roll number: %d\n",s[i].roll);

printf("\t Marks: %.1f\n\n",s[i].marks);

}

return 0;
}
