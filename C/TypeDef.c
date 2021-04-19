#include<stdio.h>
int main()
{
	typedef int marks;
	marks e;
	printf("Enter marks: ");
	scanf("%d",&e);
	if(e>=40)
		printf("Pass");
	else
		printf("Fail");
	return 0;
}
