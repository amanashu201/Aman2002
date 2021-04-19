#include<stdio.h>
int main()
{
	FILE *fp;
	int roll,i;
	float marks;
	char name[20];
	char filename[20];
	
	printf("Input file name\n");
	scanf("%s",filename);
	fp=fopen(filename,"w");
	printf("Input students data\n\n");
	
	printf("name	roll	marks\n");
	for(i=1;  i<=3;  i++)
	{
		fscanf(stdin,"%s %d %f",name, &roll, &marks);
		fprintf(fp,"%s %d %.2f",name, roll, marks);
	}	
	fclose(fp);
	fprintf(stdout, "\n\n");
	
	fp=fopen(filename,"r");
	
	printf("name	roll	marks\n");
	for(i=1; i<=3; i++)
	{
		fscanf(fp,"%s %d %f", name, &roll, &marks);
		
		fprintf(stdout, "%-8s %7d %8.2\n", name, roll, marks);
	}
	fclose(fp);
}

