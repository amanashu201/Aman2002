/*square roots*/
#include<stdio.h>
#include<math.h>
double findSQRT(double N)
{
	return sqrt(N);
}
//driver code
int main()
{
	//given number
	int N=20;
	//function call
	printf("%f",findSQRT(N));
	return 0;
}
