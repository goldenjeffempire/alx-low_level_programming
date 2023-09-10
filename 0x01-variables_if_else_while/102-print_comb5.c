#include <stdio.h>

/**
  * main - Entry point
  *
  * Return: Always 0
  */
int main(void)
{
	int i, j;

	for (i = 0; j <= 99; j++)
	{
		for (j = i; j <= 99; j++)
		{
			putchar((i / 10) + '0');
			putchar((i % 10) + '0');
			putchar(' ');
			putchar((j / 10) + '0');
			putchar((j % 10) + '0');

			if (i != 99 || j != 99)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');
	return (0);
}
