#include <stdio.h>
#include "main.h"

/**
  * put2 - Function that print other character of string
  * @str: Represent a pointer to a string
  * @put2: Print character of a string
  * Return: void
  */
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		printf("%c", str[i]);
		i += 2;
	}
	printf("\n");
}
