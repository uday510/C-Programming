#include <stdio.h>

int main () {


    char C, c;
    printf ("Enter upper case letter : ");
    C = getchar();
    printf("%d \n", C);
    c = C + 32;

    // C.toupperCase;
    
    printf("%d \n", c);
    printf("The lower case is : ");
    putchar(c);
    printf("\n");


    return 0;
}