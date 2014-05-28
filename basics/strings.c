#include <stdio.h>

int main() {

	// 1. Define an array of chars, modifiable, on stack
	char msg[] = "blah";
	printf("Message is: %s ", msg);

	// sizeof is an operator not a function
	printf("Message size is: %lu bytes \n", sizeof(msg));
	printf("Message size after chomp: %lu bytes \n", sizeof(msg));

	msg[2] = msg[1];

	// 2. String literal example
	printf("segfault expected!");
	char *anothermsg = "boo";
	printf("Message is: %s \n", anothermsg);

	// Segmentation Fault thrown... 
	// We can't do this, it cannot be changed since it's a string literal
	// Stored in constants pool, not the stack
	anothermsg[2] = anothermsg[1];
	printf("Message is: %s \n", anothermsg);

	// BEST PRACTICE - use const instead of a string literal, clearer
	const char *yetanother = "boo";
}
