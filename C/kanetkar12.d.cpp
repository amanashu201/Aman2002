/*students records 12.d a/q to page 431*/
#include<stdio.h>
#include<conio.h>
int main()
{
	FILE *fp;
	char another='y';
	struct students
	{
		char name[20];
		int roll,i;
		float marks;
	};
	struct students stds;
	fp=fopen("students.text","w");
	
	if(fp==NULL)
	{
		puts("cannot open file");
	//	exit();
	}
	while(another=='y')
	{
		printf("\nEnter name of students:");
		scanf("%[^\n]",stds.name);
		printf("\nEnter roll number:");
		scanf("%d",&stds.roll);
		printf("\nEnter marks of students:");
		scanf("%f",&stds.marks);
		
		printf("Add another record(Y/N)");
		fflush(stdin);
		another=getche();
	}
	fclose(fp);
	
}
