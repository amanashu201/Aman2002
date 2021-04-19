#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *fp;
	char filename[50];
	char c;
	printf("please enter file name :");
	scanf("%s",filename);
	
	fp=fopen("file name","r");
	
	if(fp==NULL)
	{
		printf("file not open");
	}
	c=fgetc(fp);
	while(c!=EOF)
	{
		printf("%c",c);
		c=fgetc(fp);
		
	}
	putchar(c);
	fclose(fp);
	return 0;
}
