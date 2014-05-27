#include <stdio.h>
#include <stdlib.h>

int main() {

	int cards;
	puts("Enter number of cards: ");

	// Use scanf to read input, can also use fgets
	scanf("%i", &cards);

	printf("There were %i cards entered", cards);
	return 0;
}