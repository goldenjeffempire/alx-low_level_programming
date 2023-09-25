#include "main.h"

/**
  * set_string - Sets the value of a pointer to a char
  * @s: The double pointer to be updated
  * @to: The pointer to set the value to
  */
void set_string(char **s, char *to)
{
	if (s == NULL)
		return;

	*s = to;
}
