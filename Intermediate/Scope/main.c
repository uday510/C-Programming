#include <stdio.h>


int player1 = 1;


int sum (int a, int b) {

    int c;

    c = a + b;
    return c;
}


int main () {

    int player1 = 10;
    int player2 = 20;
    int comboScore = 0;

    printf(" %d %d", player1, player2);

    comboScore = sum (player1, player2);

     printf(" %d", comboScore);
    
    return 0;
}