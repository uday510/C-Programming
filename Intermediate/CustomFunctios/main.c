#include <stdio.h>
#include <stdlib.h>

 int cal(int val1, int val2) {

        int result;

        if (val1 > val2)
        {
            result =  val1;
        } 
        else result = val2;

        return result;
    }
    
  int main () {


    int highScore1 = 100;
    int highScore2 = 200;

        int highest;

       highest = cal(highScore1, highScore2);

    printf ("The highest score is : %d\n", highest);

    return 0;
}

   