#include <stdio.h> 

int main() {

    int rating = 10;

    switch (rating)
    {
    case 5: 
        printf("Hey this was a great course !!");
        break;
    case 4:
        printf("You gave the 4 rating");
        break;
    case 3:
        printf("You gave the 3 rating");
        break;
    case 2:
        printf("You gave the 2 rating");
        break;    
    default:
        printf("wrong rating");

        break;
    }
}