#include "main.h"
#include <stdio.h>

/**
  * print_rev - String as input and output in reverse
  *
  * @s: Represent the string that print in reverse
  */
void print_rev(char *s)
{
	int length = strlen(s);

	for (int i = length - 1; i >= 0; i--)
	{
		printf("%c", s[i]);
	}
	printf("\n");
}
