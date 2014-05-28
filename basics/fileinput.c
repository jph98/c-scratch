#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

// C has no concept of strings, it uses char arrays terminated by a sentinel character \0
int main() {

	char * line = NULL;

	// unsigned integer type
	size_t len = 0;

	ssize_t read;

	FILE * in = fopen("input.txt", "r");
	if (in = NULL)
		exit(EXIT_FAILURE);

	while (( read = getline(&line, &len, in)) != -1) {
		printf("Retrieved line of length %zu :\n", read);
		printf("%s", line);
	}

	if (line)
		free(line);
	exit(EXIT_SUCCESS);

}