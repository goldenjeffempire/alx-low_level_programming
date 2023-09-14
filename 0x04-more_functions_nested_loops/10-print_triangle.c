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
	}

	int num_chars = 1;

	for (int row = 1; row <= size; row++)
	{
		for (int space = 1; space <= size - row; space++)
		{
			_putchar(' ');
		}

		for (int column = 1; column <= num_chars; column++)
		{
			_putchar('#');
		}

		_putchar('\n');
		num_chars++;
	}
}
