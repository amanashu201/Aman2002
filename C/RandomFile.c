#include<stdio.h>

int main()
{
	int loc;
	
	FILE *fp;
	
	fp = fopen("hello.txt","r");
	
	fseek(fp,0L,2);
	loc = ftell(fp);
	
	printf("loc=%d\n", loc);
	
	return 0;
}
