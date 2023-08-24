/**
 * print_number - prints an integer
 * @n: this is an entry
 * Return : 0
 */

#include "main.h"
#include <unistd.h>

int _putchar(char c) {
    return write(1, &c, 1);
}

void print_number(int n) {
    int divisor = 1;
    int temp = n;

    if (n < 0) {
        _putchar('-');
        n = -n;
    }

    while (temp > 9) {
        divisor *= 10;
        temp /= 10;
    }

    while (divisor > 0) {
        _putchar((n / divisor) + '0');
        n %= divisor;
        divisor /= 10;
    }
}

