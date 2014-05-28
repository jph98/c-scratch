#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

// C has no concept of strings, it uses char arrays terminated by a sentinel character \0
int main() {

	// Allocate char pointer to first string (+1 for the null terminated string)
	char first[] = "chester";
	char second[] = "ezri";

	// Print a single character of the string
	printf("First (char): %c \n", first[1]);

	// Print the whole string
	printf("First (string): %s \n", first);

	// Make an artificially big string to fit them, can also malloc one
	char example[100];

	// COPY the first
	strcpy(example, first);

	// CAT the second
	strcat(example, second);
	printf("Example: %s \n", example);

	// TODO: strncpy example instead and strncat

}