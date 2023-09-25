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
	char *temp = malloc(n * sizeof(char));

	if (temp == NULL)

		return (NULL);

	for (unsigned int i = 0; i < n; i++)
		temp[i] = src[i];

	for (unsigned int i = 0; i < n; i++)
		dest[i] = temp[i];

	free(temp);
	return (dest);
}
