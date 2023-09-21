#include <stdio.h>
#include "lists.h"
/**
 * pre-main - it prints before the main
 * Return: void
 */
void my_constructor(void) __attribute__((constructor));

void my_constructor(void)
{
	printf("You're beat! and yet, you must allow, \nI bore my house upon my back!\n");
}
int main()
{
	printf("Inside the main function.\n");
	return (0);
}
