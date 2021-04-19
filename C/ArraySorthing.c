#include<stdio.h>
#define size 10
int main()
{
	int no[size];
	int i, j, t;
	
	printf("Enter %d number below:\n", size);
	for(i=0; i<size; i++)
	{
		scanf("%d", &no[i]);
	}
	
	for(i=0; i<size-1; i++)
	{
		for(j=i+1; j<size; j++)
		{
			if(no[i]>no[j])
			{
				t = no[i];
				no[i] = no[j];
				no[j] = t;
			}
		}
	}
	
	printf("The sorted array is:\n");
	for(i=0; i<size; i++)
	{
		printf("%d\n",no[i]);
	}
	return 0;
}
