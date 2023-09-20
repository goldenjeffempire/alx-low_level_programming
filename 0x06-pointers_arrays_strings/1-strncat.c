#include "main.h"

/**
 * _strncat - two words
 * @dest : pointer to char param
 * @src : pointer to char param
 * @n : int parameter
 * Return: result
 */
char *_strncat(char *dest, char *src, int n)
{
	char *result = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	while (n > 0 && *src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}

	*dest = '\0';

	return (result);
}
