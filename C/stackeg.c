#include<stdio.h>

int top = 0;
int *pstack = NULL;
int n;

void push()
{
	printf("Push element : %d" ,n);
	if(top>10)
		printf("overflow");
	else
	{
		top++;
		pstack[top] =n;
	}
}

void pop()
{
  printf("\nPop  element");
  if(top<0)
  printf("\nUnderflow");
  else
  {
    pstack[top] = 0;
    top--;
   }
}


void displaystack()
{
	
}
int main()
{
	
}
