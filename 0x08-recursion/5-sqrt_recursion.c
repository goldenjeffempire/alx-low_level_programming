#include "main.h"

/**
  * _sqrt_recursion - Returns the natural square root of a number
  * @n: The number to calculate the square root of
  *
  * Return: The natural square root of the number or -1 if it does not have one
  */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	if (n == 0 || n == 1)
		return (n);

	return (sqrt_helper(n, 1, n));
}
