#include <stdio.h>

int main() {
   int numbers[5] = {3, 5, 16, 21, 24}; // Initialize the array with values

   // Calculate the sum of the numbers in the array
   int sum = 0;
   for (int i = 0; i < 5; i++) {
      sum += numbers[i];
   }

   // Print the sum
   printf("The sum of the numbers is: %d\n", sum);

   return 0;
}