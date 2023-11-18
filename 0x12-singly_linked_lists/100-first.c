#include <stdio.h>
#include "lists.h"
void before_main(void) __attribute__((constructor));
/**
 * before_main - printing a message before the main function is execute.
 *
 * Return: nothing.
 */
void before_main(void)
{
	printf("you're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
