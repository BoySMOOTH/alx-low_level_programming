#include "main.h"

/**
 * print_square - Print the square.
 * @size: Size of a square.
 * Return: Square.
 */

void print_square(int size)
{
	int y, x;

	if (size <= 0)
	{
		_putchar('\n');
	}
	for (y = 0; y < size; y++)
	{
		for (x = 0; x < size; x++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
