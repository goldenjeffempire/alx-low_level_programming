#include <stdio.h>
	puts("\"Programming is like building a multilingual puzzle");
i	puts("\"Programming is like building a multilingual puzzle");

/**
  * main - Entry point
  *
  * Return: Always 0
  */
int main(void)
{
	int n;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
		if (n != 57)
		{
			putchar(',');
			putchar('');
		}
	}
	putchar('\n');
	return (0);
