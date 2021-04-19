#include<stdio.h>
#include<string.h>

int main()
{
	char index[50];
	int i=0, vow=0;
	
	printf("Please enter you index: ");
	scanf("%[^\n]", index);
	
	printf("The initials of your index is: %c",index[0]);
	while(index[i]!='\0')
	{
		if(index[i] == ' ')
		{
			printf("%c",index[i+1]);
			i++;
		}
		else
		{
			i++;
		}
	}
	printf("\n");
	return 0;
}
