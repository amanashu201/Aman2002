/*program to find marks in hindi,english,maths,science,s.st
date-1-11-2020*/

#include<stdio.h>
int main()
{
	float hindi,english,maths,science,sst,per,sum,marks;
	
	printf("please enter marks\n:");
	
	
	printf("please enter a marks in hindi\n:");
	scanf("%f",&hindi);
	
	printf("please enter a marks in english\n:");
	scanf("%f",&english);
	
	printf("please enter a marks in maths\n:");
	scanf("%f",&maths);
	
	printf("please enter a marks in science\n:");
	scanf("%f",&science);
	
	printf("please enter a marks in sst\n:");
	scanf("%f",&sst);
	
	printf("sum of total marks:");
	
	sum = hindi+english+maths+science+sst;
	
	printf("total percenrage of marks\n:");
	
	per = (sum*100)/500;
	
	printf("marks in subject%f%f%f%f%f%F",hindi,english,maths,science,sst);
	printf(" sum of marks in all subject%f",sum);
	printf("percentage of marks in all subject%f",per);
	
	return 0;
	
}
