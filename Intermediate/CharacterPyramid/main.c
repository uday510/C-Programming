#include <stdio.h>

int main () {

    int i,j;
    char limit, value = 'A';

    printf ("ENTER UPPERCASE CHARACTER TO BE PRINTED: ");

    scanf ("%c", &limit);

    for (i = 1; i <= (limit - 'A' + 1); i++)
    {
      for ( j = 1; j <= i; j++)
      {
         printf ("%c", value);
      }
      value++;
    printf("\n");
    }
    return 0;
 }