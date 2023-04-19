/* program for adding two numbers */

// libraries
#include <stdio.h> // I/O library

// main program start
int main(void)
{
	// variables
	int a, b, sum;

	// user input
	printf("Please enter number a: ");
	scanf("%i",&a);
	printf("Please enter number b: ");
	scanf("%i",&b);

	// compute the sum of a and b
	sum = a + b;

	// output the result
	printf("The sum of %i plus %i equals %i\n",a,b,sum);

	// exit program with regular return code "0"
	return 0;
}
