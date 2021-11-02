#include <stdio.h> 

int main() {

    int value, result;

    printf ("Enter number : ");
    scanf ("%d", &value);

    result = value % 2;
 
    if (result == 0)
    {
        /* code */ printf ("Given Number %d is even ", value);
    }
    else
    {
        printf("given number %d is odd", value);
    }
    
    getchar();

    return 0;
}