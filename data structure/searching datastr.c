//searching in data str 
/*ALGORITHM
1. Start
2. Set J = 0
3. Repeat steps 4 and 5 while J < N
4. IF LA[J] is equal ITEM THEN GOTO STEP 6
5. Set J = J +1
6. PRINT J, ITEM
7. Stop */


#include <stdio.h>

void main() {
   int al[] = {1,3,5,7,8};
   int item = 5, n = 5;
   int i = 0, j = 0;
   
   printf("The array elements are :\n");
	
   for(i = 0; i<n; i++) {
      printf("al[%d] = %d \n", i, al[i]);
   }
    
   while( j < n){
      if( al[j] == item ) {
         break;
      }
		
      j = j + 1;
   }
	
   printf("Found element %d at position %d\n", item, j+1);
}
