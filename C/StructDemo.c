#include<stdio.h>
struct StructDemo
{
	int i;
	char c;
	float f;
}__attribute__((packed));

int main()
{
	struct StructDemo s;
	printf("The size of s is %d bytes.", sizeof(s));
	return 0;
}
