#include <stdio.h>
#include "lists.h"
/**
 * pre-main - it prints before the main
 * Return: void
 */

void pre_main(void) __attribute__((constructor));

void pre_main(void)
{
	printf("You're beat! and yet, you must allow, \nI bore my house upon my back!\n");
}
