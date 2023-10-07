#include <stdlib.h>
#include "main.h"

/**
  * _calloc - Allocates memory for an array
  * @nmemb: Number of elements in the array
  * @size: Size of each element in bytes
  *
  * Return: Pointer to the allocatedmemory, or NULL if allocation fails
  */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
/**
 * *_calloc - allocates memory for an array
 * @nmemb: number of elements in the array
 * @size: size of each element
 * Return: pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(size * nmemb);
	if (ptr == NULL)
		return (NULL);
	_memset(ptr, 0, nmemb * size);
	return (ptr);
}
