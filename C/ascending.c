#include<stdio.h>
int main()
{
	int a=10,b=20,c=30;
	printf("Enter a value of A, B, C:");
	scanf("%d%d%d",&a,&b,&c);
	
	if(a<b && b<c)
		printf("The value of a, b, c is %d %d %d\n",a, b, c);
	else if(b<a && a<c)
		printf("The value of b, a, c is %d %d %d\n",b, a, c);
	return 0;
	
}
