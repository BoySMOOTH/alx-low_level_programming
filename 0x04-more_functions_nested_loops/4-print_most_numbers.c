#include "main.h"
#include <stdio.h>

/**
 * print_most_numbers - Prints in less numbers from 0 to 9.
 * Return: String of the numbers.
 */
void print_most_numbers(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		if (n != 2 && n != 4)
		{
			putchar(n + '0');
		}
	}
	putchar('\n');
}
