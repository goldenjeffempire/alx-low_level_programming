#include <stdio.h>

void first(void) __attribute__ ((constructor));

/**
 * first - global scope function
 */

void first(void)
{
	printf("You're beat!");
	printf(" and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
