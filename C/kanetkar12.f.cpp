#include<stdio.h>
int main()
{
	FILE *fp1,*fp2,fp3;
	char file1[20];
	char file2[20];
	char file3[20];
	
	puts("Enter file name one:");
	scanf("%s",fp1);
	puts("Enter file name two:");
	scanf("%s",fp2);
	
	fp1=fopen(file1, "r");
	fp2=fopen(file2, "r");
	fp3=fopen("merge2.text","w");
	char str1[200];
	char ch1,ch2;
	int n=0, w=0;
	while((ch1=fgetc(fp1))!=EOF) && ((ch2=fgetc(fptr2))!=EOF))
	{
		if(ch1!=EOf)
		{
			ungetc(ch1,fp1);
			fgets(str1, 199, fp1)
			fputs(str1,fp3);
			
			if(str[0]!='n')
			n++;
		}
		if(ch2!=EOF)
		{
			ungetc(ch2,fp2);
			fgets(str1,199,fp2);
			fputs(str1,fp3);
			
			if(str1[0]!='n')
			n++;
		}
		fprintf(fp3,"\n\n number of lines = %d n number of words is = %d\n",n,w-1)
		fclose(fp1);
		fclose(fp2);
		fclose(fp3);
	}
	
}
