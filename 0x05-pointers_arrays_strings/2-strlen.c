#include "main.h"

/**
  * _strlen - This function is an integer
  *
  * @s: Represent a pointer to a character
  * @_strlen: length of the string
  *
  * Return: length (Success)
  */
int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}

	return (length);
}
