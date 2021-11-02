#include <stdio.h>

int main() {


int value1, value2, value3, big = 0;

printf("Please enter the value 1: ");
scanf("%d", &value1);

printf("Please enter the value 2: ");
scanf("%d", &value2);

printf("Please enter the value 3: ");
scanf("%d", &value3);


if ((value1 > value2 ) && (value1 > value3)) {
    big = value1;
}
if ((value2 > value3) && (value2 > value1))
{
    /* code */ big = value2;
}
if ((value3 > value1) && (value3 > value2))
{
    /* code */ big = value3;
}

printf ("The biggest number is : %d", big);

getchar();

return 0;
}

