#include <stdio.h>

// C has no concept of strings, it uses char arrays terminated by a sentinel character \0
int main() {

	FILE *fin = fopen("input.txt", "r");	
	char line[256];	

	while (fgets(line, sizeof(line), fin)) {
		printf("%s", line);
	}

	fclose(fin);

	return 0;
}