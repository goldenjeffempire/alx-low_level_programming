#include <stdio.h>

/**
 * main - Prints the alphabet.
 *
 * Return: Always 0
 */
int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}

	return (0);
}
