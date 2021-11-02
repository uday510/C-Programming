#include <stdio.h>
#include <string.h>

struct player {
    char playerName[50];
    char stageLevel[50];
    int score;
};
int main () {

struct player john;
struct player jessy;

strcpy (john.playerName, "John keller");
strcpy (john.stageLevel, "kings Room");
    john.score = 200;

strcpy (jessy.playerName, "Bohn keller");
strcpy (jessy.stageLevel, "Knight Room");
    jessy.score = 300;

printf ("%s is in the %s stage and the score is: %d\n", john.playerName, john.stageLevel, john.score);
printf ("%s is in the %s stage and the score is: %d\n", jessy.playerName, jessy.stageLevel, jessy.score);
    
    
    return 0;

}