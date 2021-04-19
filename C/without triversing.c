#include<stdio.h>
#include<string.h>

void main()
{
	FILE *fp;
	char size[20];
    char ch;
	 
	 fp=fopen("hello.text","r");
	 
	 while(fgets(size,49,fp)!=NULL)
	 
	 fclose(fp);
	 printf("size of file%d",size);
	 
}
