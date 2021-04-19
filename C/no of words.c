
#include<stdio.h>
#include<stdio.h>
int  main()					//Calling function
{
	char str[100];
	int i, count=0;
	
	printf("please enter string:");
	scanf("%[^\n]",str);
	
	for(i=0; str[i]!='\0'; i++)
	{
		if(str[i]==' '|| str[i+1]!=' ')
		{
			count++;
		}
		
	}
	printf("\n the total no of words in this string are : %d",count+1);
	return 0;
}
	
