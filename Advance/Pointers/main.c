#include <stdio.h> 

int main () {

/*
    int player1 = 4;
    int player2[10];

    printf ("%x\n", &player1);
    printf ("%x\n", &player2);
    */

//    NULL POINTER DECLARATION >>> int *null_pointer = NULL;
   int highScore = 111;
   int *adress = &highScore;

    printf ("%x %x %d",&highScore,  adress, *adress);


    return 0;
}