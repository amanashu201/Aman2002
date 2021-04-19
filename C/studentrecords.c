#include<stdio.h>
int main()
{
	char name[20];
	int i,num,marks,roll;
	
	printf("Enter number of students:");
	scanf("%d",&num);
	FILE *fp;
	fp=(fopen("student.text","a"));
	
	for(i=0; i<10; i++)
	{
		printf("Enter student name:\n");
		scanf("%s",name);
		printf("enter roll number:\n");
		scanf("%d",roll);
		printf("Enter marks:\n");
		scanf("%d",&marks);
		
		fprintf(fp,"\nName:%s \nRoll:%d \nMarks=%d \n", name, roll, marks);
	}
	fclose(fp);
}

