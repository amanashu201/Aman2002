#include<stdio.h>
#include<string.h>

int main()
{
	char str1[30], str2[30];
	int diff;
	
	printf("Please enter two strings below:\n");
	scanf("%s", str1);
	getchar();
	scanf("%s", str2);
	diff = strcmp(str1, str2);
	
	printf("The difference between %s and %s is %d.", str1, str2, diff);
	
	return 0;
}
