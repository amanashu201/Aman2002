#include <stdio.h>

int main()
{
	file *fp;
	int  number ,quantity ,i;
	float price, value;
	char item[10], filename[10];
	
	printf("input filename\n");
	scanf("%s",filename);
	fp=fopen(filename,"w");
	printf("input inventory data\n\n");
	for(i=1;  i<=3;  i++)
	{
			printf("enter item name");
			scanf("%s",item);
			printf("item number");
			scanf("%d",&number);
  			printf("enter quantity");
  			scanf("%d",quantity);
  			printf("enter price");
  			scanf("%f",price);
            
            fprintf(fp,"%s		%d		%d		%1.2f",item,number,quantity,price);
    }
    fclose(fp);
    printf(\n\n);
    
    fp=fopen(filename,"r");
    printf("item name		name		number		quqntity		price		value\n");
    
    for(i=1;  i<=3;  i++)
    {
	     fscanf(fp,	"%s		%d		%d		%f",  item, &number, &quantity, price,);
	     value=price*quantity;
	     printf("%s		%d		%d		%1.2f\n", item, number, quantity, price, value);
	}
	fclose(fp);
	return 0;
}
	     
    
