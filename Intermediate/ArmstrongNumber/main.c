#include <stdio.h>

int main () {

int input, once, tens, hundred, armstrong_number;


printf("ENTER 3 DIGIT NUMBER : ");
scanf("%d", &input);

once = input/100;

tens = (input%100)/10;

hundred = (input%10);

armstrong_number = once*once*once + tens*tens*tens + hundred*hundred*hundred;

if (input == armstrong_number) {
printf("GIVEN NUMBER >>> %d IS ARMSTRONG NUMBER\n", armstrong_number);
printf("ONCE DIGIT NUMBER >>> %d \n", once);
printf("TENS DIGIT NUMBER >>> %d \n", tens);
printf("HUNDRED DIGIT NUMBER >>> %d \n", hundred);
}
else {
printf("GIVEN NUMBER >>> %d IS NOT A ARMSTRONG NUMBER. \n", input);
printf("ONCE DIGIT NUMBER >>> %d \n", once);
printf("TENS DIGIT NUMBER >>> %d \n", tens);
printf("HUNDRED DIGIT NUMBER >>> %d \n", hundred);
}

return 0;
}