#include <stdio.h>
#include "lists.h"
/**
 * pre-main - it prints before the main
 * Return: void
 */

void _attribute_((constructor)) pre_main()
{
	printf("You're beat! and yet, you must allow,\n"
			"I bore my house upon my back!\n");
}
