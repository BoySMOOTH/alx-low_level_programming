#include "main.h"

/**
 * _islower(int c); - check for lower character
 * @c: run check for lowercase character
 * Return: Always void
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
