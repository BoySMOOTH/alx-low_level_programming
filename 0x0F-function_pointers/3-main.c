#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - Performing simple operations.
 * @argc: numbers of parameters.
 * @argv: inputs numbers.
 * Return: 0 on success.
 */
int main(int argc, char *argv[])
{
	int a, b;
	int (*f)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	if (strlen(argv[2]) > 1)
	{
		printf("Error\n");
		exit(99);
	}
	f = get_op_func(argv[2]);
	if (f == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	printf("%d\n", f(a, b));
	return (0);
}
