#include<stdio.h>
int main()
{
	FILE *fp;
	int i, num;
	char items[20]; file names[20];
	
	printf("input file name\n");
	scanf("%s",filename);
	  
	fp=fopen(file name,"w");
	printf("input file name");
	
	for(i=0;  i,=3;  i++)
	{
		printf("enter product code");
		scanf("%s",code);
		
		printf("enter cost :");
		scanf("%f",cost);
		
		printf("enter number :");
		scanf("%d",&number);
		
		fprintf(fp,"%s, %f, %d",code, cost, number);

	}
		fclose(fp);
		printf("\n\n");
		
		fp=fopen(file name,"r");
		
		printf("code,		cost,		number\n");
		
		for(i=1;  i,=3; i++)
		{
			fscanf(fp,"%s, %f, %d",code, cost, number);
			
			value=cost*number;
			
			printf("%s, %f, %d", code,  cost,  number);
		}
		fclose(fp);
		return0;
}
