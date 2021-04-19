#include<stdio.h>

int main()
{
	char name[50];
	FILE *fp;
	char ch;
	int i=1;
	printf("please enter file name:");
	scanf("%s",name);
	fp=fopen("hello.c","r");
	
	if(fp==NULL)
	{
		printf("not open file ");
		exit(1);	
	}
	printf("%d", i++);
	while(1)
	
	{
		ch=fgetc(fp);
		if(ch==EOF)
		{
			break;
		}
		printf("%C",ch);
		if(ch=='\n')
		{
			printf("%d",i);
			i++;
		}
		fclose(fp);
	}
	return 0;
}
