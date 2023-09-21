#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0
 */
int main(void)
{
	char a[4] = "abc";
	char *p;

	p = a;

	printf("a[2] = %d\n", *(p + 2));

	return (0);
}
