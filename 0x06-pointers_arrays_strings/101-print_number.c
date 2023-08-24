#include "main.h"
/**
* print_number - prints an integer
*@n:integer to be printed
*
*/
void print_number(int n)
{
	unsigned int num = n;

	if (n < 0)
	{
		_putchar('-');
		num = -num;
	}

	if ((num / 10) > 0)
		print_number(num / 10);

	_putchar((num % 10) + '0');
}
int main(void)
{
    int number = 98;
    print_number(number);

    _putchar('\n');
    return 0;
}
