#include "main.h"

/**
 * _islower - check for lower character
 * @c: run check for lowercase character
 * Return: Always 1 (Success)
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
