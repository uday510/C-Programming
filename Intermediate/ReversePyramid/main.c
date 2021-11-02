#include <stdio.h>

int main () {

    int input;
    printf ("\n");
    printf ("NUMBER OF ROWS TO BE PRINTED : ");
    scanf ("%d", &input);
    printf ("PYRAMID FOR %d IS ... \n", input);
    for (int i = input; i >= 1; i--) {
        for (int j = 1; j <= i; j++)
        {     
             printf("%d ",j);
        }
        printf ("\n");
        
    }
printf ("\n");
    return 0;
}