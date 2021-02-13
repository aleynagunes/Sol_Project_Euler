#include <stdio.h>
#include <stdlib.h>

void multiples_of_3_and_5(int x){
	int y = 0, i;
	for(i = 0; i < x; i++){
		if(i%3 == 0) y = y + i;
		else if(i%5 == 0) y = y + i; 
	}
	printf("%d", y);
}

int main(int argc, char *argv[]) {
	multiples_of_3_and_5(1000);
}
