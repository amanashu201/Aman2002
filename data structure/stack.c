#include<stdio.h>
#include<stdlib.h>
void push(int);
void pop();
void display();
int main()
{
	int n=10,choice;
//	printf("Enter number of element in stack :");
//	scanf("%d",&n);
//printf("\n------------------------------------------\n");
	while(1)
	{
		printf("\t\t*****PLEASE CHOOSE YOUR CHOICE*****\n");
		printf("\t\t1.PUSH\n\n");
		printf("\t\t2.POP\n\n");
		printf("\t\t3.DISPLAY\n\n");
		printf("\t\t4.EXIT\n\n");
		printf("\nEnter Your Choice :");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				push(10);
				
				break;
			
			case 2:
				pop();
				break;
			
			case 3:
				display();
				break;
			case 4:
				exit(0);
				break;
		}
}
	return 0;
}
void push(int n)
{
	int value,stack[4];
	int top=0;
	if(top ==n)
		printf("\n OVERFLOW");
	else
	{
		printf("Enter the value");
		scanf("%d" , &value);
		
		top = top ++;
		stack[top]=value;
	}
}
void pop()
{
	int top;
	if(top == 0)
		printf("undeflow");
	else
		top = top--;
}
void display()
{
	int top,i;
	int stack[20];
	for(i=top; i>=0; i--)
	{
		printf("%d\n",stack[i]);
	}
	if(top ==0)
	{
		printf("stack is empty");
	}
}
