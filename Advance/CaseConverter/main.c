#include <stdio.h>

int main () {
    char input, output;

    printf ("Enter a letter to case convert: ");

    input = getchar();

    if ( input >= 65 && input <= 97 ) 
        output = input + 32;

        else if  ( input >= 97 && input <= 122) 
           output = input - 32;

        putchar (output);
    
    return 0;
    }