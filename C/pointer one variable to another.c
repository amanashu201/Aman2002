#include<stdio.h>

int main()
{
	int i=3,*j,**k;
	j=&i;
	k=&j;

	printf("\n Address of i=%p",&i);
	printf("\n Address of i=%p",j);
	printf("\n Address of i=%p",*k);
	printf("\n Address of j=%p",&j);
	printf("\n Address of j=%p",k);
	printf("\n Address of k=%p",&k);
	printf("\n Value of j=%p",j);
	printf("\n Value of k=%p",k);
	printf("\n Value of i=%d",i);
	printf("\n Value of i=%d",*(&j));
	printf("\n Value of i=%d",*j);
	printf("\n Value of k=%d",**k);	
	
}

