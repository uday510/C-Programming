#include <stdio.h>

int main() {
	
	int life = 10;
	int life2 = 10;
	
//	life == life2;
//	life != life2;
//	life <= life2;

	int life3 = life && life2; // logical AND
	int life4 = life || life2; //logical OR
	printf("%d", life4);
	
	return 0;
}
