#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * Print_listint - Print elements of a singly linked list
 * @h: Pointer to a list.
 * Return: integers.
 *
 */

size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h !=NULL)
	{
		printf("%i\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
