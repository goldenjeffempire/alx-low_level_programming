#include "main.h"

/**
  * print_triangle - Prints a triangle, folowed by a new line
  *
  * @size: Size of the triangle
  */
void print_triangle(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
		return;
	}
	for (int row = 1; row <= size; row++)
	{
		for (int column = 1; column <= row; column++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
