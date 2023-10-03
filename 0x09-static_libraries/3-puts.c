#include "main.h"
#include <stdio.h>

/**
  * _puts - Function to print a string
  * @str: To print to the standard output
  */
void _puts(char *str)
{
	if (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
