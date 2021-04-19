#include<stdio.h>
int main()
{
	char array[50];
	int search,count,num;
	
	printf("enter no of element of an array :");
	scanf("%d",&num);
	
	for(count=0; count<num; count++)
	{
		printf("please enter integer value%d\n",num);
		scanf("%d",&array[count]);
		
	}
	printf("enter searching number\n");
	scanf("%d",&search);
	
	for(count=0; count<num; count++)
	{
		if(array[count]==search)                //el found
		{
			printf("search element in location%d\n",count+1);
		}
	
		else(count==num);
		{
			printf("not present in location%d\n",search);
		}
	}
	return 0;
	
	
}
