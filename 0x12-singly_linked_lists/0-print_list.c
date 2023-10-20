#include <stdio.h>
#include "lists.h"

/**
 * print_list - Prints all elements in a linked list.
 * @h: Pointer to the list to be printed.
 * Return: Number of nodes in the list.
 */
size_t print_list(const list_t *h)
{
	size_t s = 0;

	while (h)
	{
		if (h->str)
			printf("[%u] %s\n", h->len, h->str);
		else
			printf("[0] (nil)\n");
		s++;
		h = h->next;
	}

	return (s);
}
