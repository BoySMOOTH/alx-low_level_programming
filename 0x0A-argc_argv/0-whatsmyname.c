#include "main.h"
/**
 * main - print the name of the program
 * @argc: Argument counter
 * @argv: Arugument strings
 * Return: Program name
 */
int main(int argc, char *argv[])
{
	if (argc == 1)
		printf("%s\n", *argv);
	return (0);
}
