/*
	WAP to accept names of 5 students and sort them in ascending order
*/
#include<stdio.h>
#include<string.h>

int main()
{
	char student[5][30];	//Two dimensional array
	char temp[30];
	int i, j;
	printf("Please enter names of 5 students below:\n");
	for(i=0; i<5; i++)
	{
		scanf("%[^\n]",student[i]);
		getchar();
	}
	
	for(i=0; i<4; i++)
	{
		for(j=i+1; j<5; j++)
		{
			if(strcmp(student[i], student[j])>0)
			{
				strcpy(temp, student[i]);
				strcpy(student[i], student[j]);
				strcpy(student[j], temp);	
			}
		}
	}
	
	printf("\nThe sorted list is:\n");
	for(i=0; i<5; i++)
	{
		printf("%s\n", student[i]);
	}
	
	return 0;
}
