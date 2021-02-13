#include <stdio.h>
#include <stdlib.h>


void even_fibonacci_numbers(int t){
	int x = 1, y = 2, sum = 0, a, b;
	while(y <= t){
		sum = sum + y;
		a = x;
		b = y;
		x = a + 2 * b;
		y = 2*a + 3*b;	
	}
	
	printf("%d", sum);
}

int main(int argc, char *argv[]) {
	even_fibonacci_numbers(4000000);
}
