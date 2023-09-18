#include "main.h"

/**
  * swap_int - To swap the values of two integers
  * @a: Address of the first integer variable
  * @b: Address of the second integer variable
  */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
