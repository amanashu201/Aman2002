#include<stdio.h>
#include<conio.h>

int main()
{
	char c;
	
	printf("Please enter a character: ");
	c = getch();
	printf("\nThe value read by getch is %c.\n", c);

	printf("Please enter a character: ");
	c = getchar();
	printf("\nThe value read by getchar is %c.\n", c);
		
	printf("Please enter one more character: ");
	c = getche();
	printf("\nThe value read by getche is %c.\n", c);
	
	return 0;
}
