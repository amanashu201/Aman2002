#include<stdio.h>

int main()
{
    int t;
    char name[30];
    printf("please enter your name:\n");
    scanf("%s",name);
	getchar();
    printf("Enter the time (1-24): ");
    scanf("%d", &t);
    printf("\n");
    if(t>0 && t<=3)
        printf("Good Night");
    else if(t>3 && t<12)
        printf("Good Morning");
    else if(t==12)
        printf("Good Noon");
    else if(t>12 && t<=15)
        printf("Good AfterNoon");
    else if(t>15 && t<20)
        printf("Good Evening");
    else if(t>=20 && t<=24)
        printf("Good Night");
    else
        printf("Unknown time!");
    
    return 0;
}
