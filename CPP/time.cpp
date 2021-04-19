#include<iostream>
#include <stdio.h> 
#include <time.h> 
   
int main() 
{ 
    time_t s, val = 1; 
    struct tm* current_time; 
  
    s = time(NULL); 							//time in second
  
    current_time = localtime(&s); 				//show current time
  
    printf("%d:%d:%d", 					//time min,hour,second
           current_time->tm_hour, 
           current_time->tm_min, 
           current_time->tm_sec); 
  
    return 0; 
} 
