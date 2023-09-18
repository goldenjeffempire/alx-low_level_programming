#include <stdio.h>
#include <string.h>
#include "main.h"

/**
  * rev_string - Takes a pointer to a string as input
  * @s: Represent a pointer to a string
  */
void rev_string(char *s)
{
	char *start = s;
	char *end = s + strlen(s) - 1;

	while (start < end)
	{
		char temp = *start;
		*start = *end;
		*end = temp;
		start++;
		end--;
	}
}
