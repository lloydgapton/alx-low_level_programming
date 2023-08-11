#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main(void)
{
	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("The number is %d: ", n);
	if (n > 0)
	{
		printf("is positive");
	}
	else if (n == 0)
	{
		printf("is zero");
	}
	else
	{
		printf("is negative");
	}
	printf("\n");
	return (0);
}
