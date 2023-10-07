#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
  * _realloc - Reallocates a memory block using malloc and free
  * @ptr: Pointer to the memory previously allocated with malloc
  * @old_size: Size of the allocated space for ptr
  * @new_size: New size of the memory block
  *
  * Return: Pointer to the allocated memory block, or NULL on failure
  */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	void *new_ptr = malloc(new_size);

	if (new_ptr == NULL)
	{
		return (NULL);
	}

	if (ptr != NULL)
	{
		size_t copy_size = old_size;

		if (new_size < old_size)
		{
			copy_size = new_size;
		}
		memcpy(new_ptr, ptr, copy_size);
		free(ptr);
	}

	return (new_ptr);
}
