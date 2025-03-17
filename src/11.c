// A simple C program to calculate the factorial of a given number

#include <stdio.h>

int main() {
   int num, factorial = 1;

   // Getting input from the user
   printf("Enter a positive integer: ");
   scanf("%d", &num);

   // Calculating the factorial of the number
   for (int i = 2; i <= num; i++) {
      factorial *= i;
   }

   // Printing the result
   printf("The factorial of %d is %d\n", num, factorial);

   return 0;
}
