#include<stdio.h>
#include<stdlib.h>


int main()
{
	int a = 10, b = 20;
	swap (&a, &b);
	printf("\na = %d b = %d",a,b);
}
swapr(int *x,int *y)
{
	int t;
	t=*x;
	*x=*y;
	*y=t;
}

