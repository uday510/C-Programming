#include <stdio.h>
#include <stdlib.h>
int main () {

int value = 5;
    while (value < 55)
    {
       printf ("%d\n", value);
       value++;
       if (value > 20) {
           if (value > 15)
           {
               break;
           }
           
        //    /* code */ exit(0);
       
       }
      
    }

   printf ("program exited mothefucker : %d ", value);
    
    return 0;
}