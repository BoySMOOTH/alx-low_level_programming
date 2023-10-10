#include "main.h"

/**
 * print_alphabet - print alphabets a - z
 *
 * Return: Always void
 */
void print_alphabet(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
	_putchar(alphabet);
	}
	_putchar('\n');
}
