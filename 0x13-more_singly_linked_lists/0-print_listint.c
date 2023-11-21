#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint - print all the elements of a listint_t list.
 * @h: Pointer to the head of the list.
 *
 * Return: the number of nodes.
 */

size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%i\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
