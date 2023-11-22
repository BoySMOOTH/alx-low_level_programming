#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - Free a listint_t list
 * @head: Pointer to listint_t
 *
 * Return: void.
 */

void free_listint(listint_t *head)
{
	listint_t *tp, *tp2;

	tp = head;
	while (tp != NULL)
	{
		tp2 = tp->next;
		free(tp);
		tp = tp2;
	}
}
