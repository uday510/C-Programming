#include <stdio.h>

int main() {
	
	int life = 11;
	int bonus = 2;
	int factor;
	
	factor = life + bonus;
	
	printf("value of factor is: %d\n", factor);
	
	factor = life * bonus;
	
	printf("value of factor is: %d\n", factor);
	
	factor = life - bonus;
	
	printf("value of factor is: %d\n", factor);
	factor = life / bonus;
	
	printf("value of factor is: %d\n", factor);
	factor = life % bonus;
	
	printf("value of factor is: %d\n", factor);
	
//	life = life + 1;
//	life++;

//	++life;
	
	printf("value of life is: %d\n", life);
	
	
	
	return 0;
}
