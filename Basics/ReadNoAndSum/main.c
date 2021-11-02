#include <stdio.h>

int main () {

    float value1, value2, sum;

    printf("Please enter the value 1: ");
    scanf("%f", &value1);
    printf("Please enter the value 2: ");
    scanf("%f", &value2);
    
    sum = value1 + value2;

    printf("You sum of 2 values: %f \n", sum);

    getchar();

    return 0;
}
