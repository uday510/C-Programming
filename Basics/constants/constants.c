// 1. using #define
// 2. using const keyword

/*
#include <stdio.h>

#define LIFE 5
#define BLOOD 3

int main() {
	
	int value = LIFE * BLOOD;
	
	printf("%d\n", value);
	return 0;
}

*/

// 2 method

#include <stdio.h>

int main()  {
	
	const int LIFE = 10;
	const int BLOOD = 3;
	
	int value = LIFE * BLOOD;
	
	
	printf("Hello, World");
}



















