/**
 * generate_password -it generates randome passwords
 * @length: this is an entry
 * @password: this is the second entry.
 */

#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <time.h>

int main (void)
{
	char c;
	int x;

	srand(time(0));
	while (x <= 2645)
	{
		c = rand() % 128;
		x += c;
		putchar(c);
	}
	putchar(2772 - x);

	return (0);
}
