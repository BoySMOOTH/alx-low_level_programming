#include "function_pointers.h"
/**
 * print_name - Printing a string-name.
 * @name: string-name of the person.
 * @f: pointer function.
 * Return: no return.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
