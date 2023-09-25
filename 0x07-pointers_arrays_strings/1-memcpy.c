#include "main.h"

/**
  * _memcpy - Copies n bytes from src to dest
  * @dest: Pointer to the destination memory area
  * @src: Pointer to the source memory area
  * @n: Number of byte to copy
  *
  * Return: Pointer to the destination memory area
  */
char *_memcpy(char *dest, char *src, unsigned int n);
{
	int r = 0;
	int i = n;

	for (; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}

	return (dest);
}
