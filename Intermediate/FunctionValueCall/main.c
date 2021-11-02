#include <stdio.h>

void swap ( int value1, int value2) {

int temp;

temp = value1;

value1 = value2;

value2 = temp;

return;
}

int main () {

int val1 = 10;
int val2 = 12;


printf ("BEFORE SWAPPING >>> val1: %d, val2: %d\n",val1, val2 );
swap (val1, val2);

printf ("AFTER SWAPPING >>> val1: %d, val2: %d ",val1, val2 );

    return 0;
}