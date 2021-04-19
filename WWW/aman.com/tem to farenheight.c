/*program to convert temp from degree celcious to farenhright*/

#include<stdio.h>
int main()
{
	float c, f;
	printf("please enter temp in degc:");
	scanf("%f",&degc);
	
	f =1.8*c+32;
	printf("temp in fahrenhightis%f\n",f);
	return 0;
}
