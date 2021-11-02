#include <stdio.h>



int factorial(int temp) {
    if (temp <= 1) 
        return 1;
  else  return  temp * factorial(temp-1);
}

int main () {

int input;

printf("Enter a digit to find factorial: ");
scanf ("%d", &input);

// for ( int i = input; i >= 1; i--)
// {
//     fact = fact * i;
//     printf("%d \n", fact);
// }
printf ("Factorial value of %d is: %d", input, factorial(input));

return 0;
}