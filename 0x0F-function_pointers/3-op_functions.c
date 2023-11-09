#include "3-calc.h"
/**
 * op_add - Sum the two integers.
 * @a: input one.
 * @b: input two.
 * Return: 0 if false, something else otherwise.
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - Subtract the two integers.
 * @a: input one.
 * @b: input two.
 * Return: 0 if false, something else otherwise.
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - Multiply the two integers.
 * @a: input one.
 * @b: input two.
 * Return: 0 if false, something else otherwise.
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - Divide the two integers.
 * @a: input one.
 * @b: input two.
 * Return: 0 if false, something else otherwise.
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
/**
 * op_mod - Module of two integers.
 * @a: input one.
 * @b: input two.
 * Return: 0 if false, something else otherwise.
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
