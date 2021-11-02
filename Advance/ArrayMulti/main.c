#include <stdio.h>

int main () {

    int salary [3][4] = {
        {2, 3, 5, 8},
        {8 ,5, 6, 9},
        {1, 5, 8, 6}
    };
    
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("salary[%d][%d]: %d\n",i, j, salary[i][j]);
        }
        
    }
    
   return 0;
}