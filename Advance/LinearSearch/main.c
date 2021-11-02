#include <stdio.h>

int main () {

    int array[20], find, i, size, occurance = 0;

    printf("Enter the size of array ");
    scanf ("%d", &size);

    printf ("Enter the elemets >> \n");
    for ( i = 0; i < size; i++) {
        scanf("%d", &array[i]);
    }

    printf("Enter the element to be searched ");
    scanf ("%d", &find);

for (i = 0; i < size; i++) {

    if (array[i] == find) {
        printf("%d is at location %d \n", find, i+1);  
        occurance++;
        break;
    } 
}

if (occurance == 0)
    printf("Element not found Asshole");
else printf("Your element occured %d time \n", occurance);

 return 0;
}
