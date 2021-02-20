#include <stdio.h>
#include <stdlib.h>


void sum_square_difference(int n){
	int sum_of_square, square_of_sum;
	sum_of_square = n*(n+1)*(2*n+1)/6;
	square_of_sum = n*n*(n+1)*(n+1)/4;
	printf("%d", square_of_sum - sum_of_square);
}

int main(int argc, char *argv[]) {
	sum_square_difference(100);
}
