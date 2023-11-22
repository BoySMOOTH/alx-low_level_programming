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
	while (head != NULL)
	{
		free(head);
		head = head->next;
	}
}
