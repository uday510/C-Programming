#include <stdio.h>
#include <stdlib.h>

int main () {


    int value1 = 5;
    int value2 = 0;
    int value3;

    if (value2 == 0)  {
        /* code */ fprintf (stderr, "Legendary Division by zero error!\nExiting...\n");
        exit (EXIT_FAILURE);
    }
    
    value3 = value1 / value2;

    fprintf (stderr, "Anwser is : %d\n", value3);
   
  EXIT_SUCCESS;
    
    return 0;

}
