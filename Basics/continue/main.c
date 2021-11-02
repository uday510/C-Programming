#include <stdio.h>

int main() {

int value = 5;

do
{

if (value == 11)
{
    continue;
}
//     if (value != 11)
//     {
//         /* code */printf("%d ", value);
//     }
//     if ( value == 11) 
//     printf ("ELEVEN not printed ");
//     /* code */
    printf("%d ", value);
    value++;
} while (value < 20);





}