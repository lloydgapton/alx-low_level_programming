#include "main.h"
/**
 * main - print lowercase alphabets
 * Return : (0)
 */

void print_alphabet(void)
{
	char letter = 'a';
	for(letter = 'a'; letter ='z'; letter ++)
	{
	       	_putchar(letter);
	}
	_putchar('\n');
	return (0);
}
