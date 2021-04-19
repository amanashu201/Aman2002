#include<stdio.h>

void display(FILE *f);
int main() 
{ 
    FILE *fp1, *fp2, *fp3; 
    int count = 0;  
    char fname1[100]; 
    char fname2[100];
    char ch;
  
    printf("Enter file name first: "); 
    scanf("%s", fname1); 
    printf("Enter file name second:");
    scanf("%s",fname2);
   
    fp1 = fopen(fname1, "r");
    fp2 = fopen(fname2, "r");
	fp3 = fopen("Third.txt","w");

    if (fp1==NULL || fp2 == NULL) 
    { 
        printf(" not open file %s", fname1, fname2); 
        return 0; 
    } 
  
    while ((ch = getc(fp1)) != EOF) 
    {
    	if(ch!='\n')
    	{
    		putc(ch,fp3);
		}
		else
		{
			putc('\n',fp3);
			while ((ch = getc(fp2)) != EOF)
			{
				if(ch!='\n')
    			{
    				putc(ch,fp3);
				}
				else
				{
					putc('\n',fp3);
					break;
				}
			}
		}
   	}

    printf("Content of the first file:\n");
    //display(fp1);
    while((ch=getc(fp1))!=EOF)
	{
		putchar(ch);
	}
	putchar('\n');
    printf("Content of the second file:\n");
    //display(fp2);
    while((ch=getc(fp2))!=EOF)
	{
		putchar(ch);
	}
	putchar('\n');
	
	printf("Content of the third file:\n");
  	//display(fp3);
  	while((ch=getc(fp3))!=EOF)
	{
		putchar(ch);
	}
	putchar('\n');
	
  	fclose(fp1); 
    fclose(fp2);
    fclose(fp3);
    
    return 0; 
} 


void display(FILE *f)
{
	char ch;
	while((ch=getc(f))!=EOF)
	{
		putchar(ch);
	}
	putchar('\n');
}
