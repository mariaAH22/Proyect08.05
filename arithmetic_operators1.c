#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* examples for using basic arithmetic operators: */

	/*integer operations*/
	printf("Integer operations:\n");
	printf("11 + 3 = %i\n", 11+3);
	printf("11 - 3 = %i\n", 11-3);
	printf("11 * 3 = %i\n", 11*3);
	printf("11 / 3 = %i\n", 11/3);
	printf("11 %% 3 = %i\n",11%3);
	/* note: why %% ???
	   answer: to print a single % sign with printf, you have to write %% instead,
	   because % is used as control character (escape character) for subsequent
	   characters. e.g.: %i or %f are interpreted as placeholders.*/

	/*float operations*/
	printf("Float Division:\n");
	printf("11.0 / 3.0 = %f\n", 11.0/3.0);

	return 0;
}
