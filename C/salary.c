//\*salary his dearness allowance is 40%of basic salary, house rent allowance is 20% of basic sallery calculate his gross salary*/

#include<stdio.h>
int main()
{
	float bs,gs,da,hr;
	
	printf("please enter a ramesh basic salary:");
	scanf("%f",&bs);
	da = 40*bs/100;
	
	plrintf("dearness allowance:");
	scanf("%f",&da);
	hr = 20*bs/100;
	
	printf("house rent allowence:");
	gs = bs-(da+hr);
	
	printf("calculate ramesh gross salary is%f\n,gs");
	return 0;
}
	

