#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(int argc, char *argv[])
{
	char cmd[] = "dir ";
	strcat(cmd, argv[1]);
	system(cmd);
}
