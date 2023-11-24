#include "main.h"

/**
 * binary_to_unit - converts a binary number to an unsigned int
 * @b: A pointing to a string of 0 and 1 char
 *
 * Return: the converted numbers, or 0 if.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;

	if (!b)
		return (0);
	while (*b)
	{
		if (*b != '0' && *b != '1')
			return (0);
		num = num * 2 + (*b++ - '0');
	}
	return (num);
}
