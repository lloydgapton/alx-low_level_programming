#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n >= 1)
	{
		printf (n " :is positive");
	}
	else if (n == 0)
	{
		printf(n ": is zero");
	}
	else
	{
		printf (n ": is negative");
	}

	return (0);
}
