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

/**
  * sqrt_helper - Helper function to calculate the square root recursively
  * @n: The helper to calculate the square root of
  * @start: The starting point for the search
  * @end: The ending point for the search
  *
  * Return: The natural square root of the number or -1 if it does not have one
  */
int sqrt_helper(int n, int start, int end)
{
	int mid;

	if (start <= end)
	{
		mid = (start + end) / 2;

		if (mid * mid == n)
			return (mid);

		if (mid * mid > n)
			return (sqrt_helper(n, start, mid - 1));

		return (sqrt_helper(n, mid + 1, end));
	}

	return (end);
}
