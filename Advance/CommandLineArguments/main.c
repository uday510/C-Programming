#include <stdio.h>
 
 int main (int argc, const char * argv[]) {


    printf ("Program name %s\n", argv[0]);

    if (argc == 2)
    {
        printf ("The argument supplies is %s\n", argv[1]);
    } 
    else if (argc > 2)
    {
            printf ("Too many arguments supplied.\n");
                    /* code */
    } 
    else {
        printf ("One argument expected.\n");
    }
     return 0;

 }