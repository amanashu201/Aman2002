/* program to find distance in m, f, i, cm
date-1-11-2020*/

 #include<stdio.h>
 int main()
 {
 	float m, f, in, cm, km;
 	
 	printf("please enter a distance between two cities in km:");
 	scanf("%f",&km);
 	 m = km*1000;
 	 printf("Distance between two cities in meters is: %f\n",m);
 	 
 	 f = km*3280.84;
 	 printf("Distance between two cities in feet is: %f\n",f);
	  
 	 
 	 in = km*39370.1;
 	 printf("Distance between two cities in inches is: %f\n",in);
 	 
	  cm = km*10000;
	  printf("Distance between two cities in centimeters is: %f\n",cm);
	  
	  return 0;
 	
 }
