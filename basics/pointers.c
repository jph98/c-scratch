#include <stdio.h>

int main() {

	int x = 5;

	printf("The value of x is %i \n", x);
	printf("The address of x is %p \n", &x);

	// Store this in a pointer
	int *x_address = &x;

	printf("The value of the pointer address is %i \n", *x_address);

	// Change the contents of the address
	*x_address = 1000;

	printf("The value of the pointer address is now %i \n", *x_address);
}