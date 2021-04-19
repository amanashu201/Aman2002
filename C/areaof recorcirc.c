/*program to find area of rectangle,perimeter of rectangle,area of circle,circumfrence of circle
date 1-11-2020*/

#include<stdio.h>
int main()
{
	float l,b,r,ar,pr,arc,cc;
	
	printf("enter length,bredth and radius of circle:");
	scanf("%f%f%f",&l,&b,&r);
	
	ar = l*b;                                             //area of rectangle
	pr = 2*(l+b);                                        //perimeter of rectangle
	arc = 3.14*r*r;                                     //area of circle
	cc = 2*3.14*r;                                      //circumfrence of circle
	
	printf("area of rectangle%f",ar);
	printf("perimeter of rectangle%f",pr);
	printf("area of circle%f",arc);
	printf("circumfrence of circle%f",cc);
	return 0;
}
