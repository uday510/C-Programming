#include <stdio.h>

int main () {

    int number, once, tenth, hundred, sum;

    printf ("ENTER A THREE DIGIT NUMBER ASSHOLE : ");
    scanf ("%d", &number);
    
    once = number/100;

    tenth = ( (number%100)/10 );

    hundred = number%10;

    sum = once + tenth + hundred;

    printf("ENTER 3 DIGIT NUMBER : %d", sum);

    getchar();

    return 0;

}
/* FOR 4 DIGIT NUMBER 
#include <stdio.h>

int main () {

    int number, once, tenth, hundred,thousand,  sum;

    printf ("ENTER A THREE DIGIT NUMBER ASSHOLE : ");
    scanf ("%d", &number);
    
    once = number/1000;

    tenth = ( (number%1000)/100 );

    hundred = ( (number%100)/10;

    thousand = number%10;

    sum = once + tenth + hundred + thousand;

    printf("ENTER 3 DIGIT NUMBER : %d", sum);

    getchar();

    return 0;

}

*/