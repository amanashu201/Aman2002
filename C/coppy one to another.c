/*add the constent of one file at the end of another*/
#include<stdio.h>
#include<stdlib.h>
void main()
{
	FILE *fp1,*fp2;
	char ch;
	
	fp1=fopen("hello.text","r");
	fp2=fopen("output.text","w");
	
	while(1)
	{
		ch=fgetc(fp1);
		if(ch==EOF)
			break;
		else
			putc(ch,fp2);
	}
	printf("file coppy successfully!");
	fclose(fp1);
	fclose(fp2);
}
