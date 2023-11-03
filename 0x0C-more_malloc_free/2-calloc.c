#include <stdlib.h>
#include "main.h"
/**
 * _calloc - implements the calloc with malloc and
 * Allocates memory for an array using malloc
 * @nmemb: number of elements in an array
 * @size: the size of the array to be created
 * Return: NULL if nmemb/size is 0,
 * if malloc fails, return NULL,
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *memory;

	char *buffer;

	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	memory = malloc(nmemb * size);

	if (memory == NULL)
		return (NULL);

	buffer = memory;

	for (i = 0; i < (nmemb * size); i++)
		buffer[i] = '\0';

	return (memory);
}
