#include <stdio.h>

struct 
{
    unsigned int lowMemory : 1;
    unsigned int highMemory : 1;

} mem1;

int main () {
    printf("The memory size occupied by mem1 is: %lu bytes\n", sizeof(mem1));

    return 0;
}
 