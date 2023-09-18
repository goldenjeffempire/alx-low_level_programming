#include "main.h"

/**
  * _puts - Function to print a string
  * @str: To print to the standard output
  */
void _puts(char *str)
{
	while (*str != '\0')
	{
		putchar(*str);
		str++;
	}
	putchar('\n');
}
