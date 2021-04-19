#include<stdio.h>

int main()
{
	int radius;
	float area,perimeter;
	
	printf("\n Enter radius of circle:");
	scanf("%d",&radius);
	areaperi(radius,&area,&perimeter);
	
	printf("Area = %f",area);
	printf("\nperimeter = %f",perimeter);
}
areaperi(int r,float *a,float *p)
{
	*a = 3.14*r*r;
	*p = 2*3.14*r;
}
