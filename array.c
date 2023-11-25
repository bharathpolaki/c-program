#include <stdio.h>

int main() {
   int numbers[5]; // Declare an array of size 5

   // Input numbers from the user
   printf("Enter 5 numbers=\n");
   for (int i = 0; i < 5; i++) 
      scanf("%d", &numbers[i]);
   

   // Print the numbers in reverse order
   printf("Numbers in reverse order=\n");
   for (int i = 4; i >= 0; i--) 
      printf("%d\n", numbers[i]);
   

   return 0;
}