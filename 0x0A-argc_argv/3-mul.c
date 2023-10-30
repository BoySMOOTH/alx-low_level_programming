#include <stdio.h>
#include <stdlib.h>
/**
 * main - Print the resukt of multiply two numbers
 * followed by a new line
 * @argc : number of command-line arguments
 * @argv : string of argument passed
 * Return: 0 (Success), 1 on failure
 */
int main(int argc, char *argv[])
{
	int arg1, arg2, product;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	arg1 = atoi(argv[1]);
	arg2 = atoi(argv[2]);

	product = arg1 * arg2;

	printf("%d\n", product);

	return (0);
}
