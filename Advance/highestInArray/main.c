#include <stdio.h>

int main () {

    int array[20], max, size, i, place = 1;
    printf ("ENTER THE SIZE OF AN ARRAY ");
    scanf ("%d", &size);

    printf ("Enter array[%d] values\n",size );

        for (i = 0; i < size; i++) {

            scanf ("%d", &array[i]);
        }

        max = array[0];

        for ( i = 0; i < size; i++) {

            if (array[i] > max) {
                max = array[i];
                place = i + 1;
            }
        }
        printf("\n max element is %d at position %d", max, place);
        return 0;

}
