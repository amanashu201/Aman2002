#include<stdio.h>
 
int nTop=-1;
int *pStack = NULL;
/*
nTop: To refer topmost element in array.
 
pStack: pointer to array that 
can be implemented as stack pointer
*/
/*
Push new element 
at the top of linked list
*/
void push(int n)
{
  printf("\nPush element: %d", n);
  if(nTop>9)
  printf("Overflow");
  else
  {
    nTop++;
    pStack[nTop] = n;
  }
}
/*
Pop topmost element 
from stack
*/
 
 
void DisplayStack()
{
  int nSize=10;
  /*
    allocate dynamic memory of size 10 int
    to store 10 elements 
  */
  pStack = (int *)malloc(sizeof(int)*10); 
     
  push(10);
  push(12);
  DisplayStack();
  pop();int nSize=10;
  /*
    allocate dynamic memory of size 10 int
    to store 10 elements 
  */
  pStack = (int *)malloc(sizeof(int)*10); 
     
  push(10);
  push(12);
  DisplayStack();
  pop();
}
 
int main()
{
  int nSize=10;
  /*
    allocate dynamic memory of size 10 int
    to store 10 elements 
  */
  pStack = (int *)malloc(sizeof(int)*10); 
     
  push(10);
  push(12);
  DisplayStack();
  pop();
  DisplayStack();
  push(45);
  push(24);
  push(12);
  DisplayStack();
  pop();
  pop();
  DisplayStack();
}
