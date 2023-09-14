#include "main.h"

/**
  * _isupper - Check if a character is uppercase
  *
  * @c: The character to be checked
  *
  * Return: it's returns 1 when c is uppercase and 0 when lowercase
  */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
