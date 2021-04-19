#include<stdio.h>

int main()
{
	char name[50];
	FILE *fp;
	char ch;

	fp=fopen("name","r");
	
	if(fp==NULL)
	{
		printf("not open file %s\n",name);
		
	}
	else
	{
		while((ch=fgetc(fp))!=EOF)
		{
			printf("%c",ch);
		}
		fclose(fp);
	}
	return 0;
}
