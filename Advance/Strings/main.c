#include <stdio.h>
#include <string.h>

int main () {


    // char player2[10] = {'H', 'E', 'L', 'L', 'O', '\0'};   
    char player1[10] = "Hello";
    char player2[10] = "world";
    char combo[20];

        int l;
    // strcat(player1, player2);

    // printf ("%s ",player1 );

    // strcpy(combo, player2);

    // printf("%s ", player1);
    // printf ("%s", combo);

    l = strlen(player1);
    printf ("%d\n", l);
    return 0;
}