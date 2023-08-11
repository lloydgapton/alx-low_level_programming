#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
        int n;

        srand(time(0));
        n = rand() - RAND_MAX / 2;
        printf("The string Last digit of %d is ", n);
        if (n % 10 > 5)
        {
                printf("and is greater than 5");
        }
        else if (n % 10 == 0)
        {
                printf("and is zero");
        }
        else
        {
                printf("and is less than 6 and not 0");
        }
        printf("\n");
        return (0);
