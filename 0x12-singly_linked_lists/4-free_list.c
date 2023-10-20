#include <stdlib.h>
#include "lists.h"

/**
 * free_list - Frees a linked list.
 * @head: The list to be released.
 * Return: None (void).
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
