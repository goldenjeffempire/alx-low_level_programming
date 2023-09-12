#include <stdio.h>

/**
  * main - This function print alphabet
  *
  * Return: Always (0) Success
  */
char print_alphabet(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}
	putchar('\n');
}
