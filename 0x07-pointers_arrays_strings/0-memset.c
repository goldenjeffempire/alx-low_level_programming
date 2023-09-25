#include "main.h"

/**
  * _memset - Fills memory with a constant byte
  * @s: Pointer to the memory area
  * @b: Constant byte to fill the memory with
  * @n: Number of byte to fill
  *
  * Return: Pointer to the memory area
  */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;

	return (s);
}
