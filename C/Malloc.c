#include<stdio.h>
#include<stdlib.h>

int main()
{
	int n, i, *p;
	printf("Enter how many number you want to process: ");
	scanf("%d", &n);
	p = malloc(sizeof(int) * n);
	
	printf("Enter data:\n");
	for(i=0;i<n;i++)
	{
		printf("%3d. ", i+1);
		scanf("%d", p);
	}
}


/*
	Enter how many number you want to process: 10
	Enter data:
	  1. 
	  2.
	  ... 
	  9.
	 10.
*/
