#include "function_pointers.h"
/**
 * int_index - Search for a integer.
 * @array: strings to look up.
 * @size: lengths of the string.
 * @cmp: pointers to function.
 * Return: -1 on failure, counter on success.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int counter = 0;

	if (array != NULL && cmp != NULL)
	{
		if (size <= 0)
			return (-1);
		while (size--)
		{
			if (cmp(array[counter]))
				return (counter);
			counter++;
		}
	}
	return (-1);
}
