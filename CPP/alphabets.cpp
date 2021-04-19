#include<stdio.h>
int main()
{
	int alpb;
	do
	{
		printf("How many letters in alphabets: ");
		scanf("%d", &alpb);
	
		if(alpb==26)
		{
			printf("you are genious\n");
			break;
		}
		else if(alpb==-1)
		{
			printf("Better luck next time!");
			break;
		}
		else
		{
			printf("Try again! (type -1 to quit)\n");
		}
	}
	while(alpb!=-1);
	
	return 0;
}



