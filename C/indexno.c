#include<stdio.h>
#include<stdio.h>

int main()					//Calling function
{
	char str[100];
	int i, tlw;
	tlw=1;
	
	
	printf("please enter string:");
	gets(str);
	
	for(i=0; str[i]!='\0'; i++)
	{
		if(str[i]==' '|| str[i]=='\n' ||str[i]=='\t')
		{
			tlw++;
		}
		
	}
	printf("\n the total no of words in this string %s = %d",str,tlw);
	return 0;
	
}
