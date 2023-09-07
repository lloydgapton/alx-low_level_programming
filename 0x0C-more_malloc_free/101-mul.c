#include <stdlib.h>
#include "main.h"
/**
 *  * mul - multiplies two positive numbers
 *   * @num1: the first number, in base 10
 *    * @num2: the second number, in base 10
 *     * Return: the result, in base 10, or NULL on error
 *      */
char *mul(char *num1, char *num2)
{
	    /* TODO: implement the multiplication algorithm */
}

/**
 *  * is_digit - checks if a character is a digit
 *   * @c: the character to check
 *    * Return: 1 if c is a digit, 0 otherwise
 *     */
int is_digit(char c)
{
	    return (c >= '0' && c <= '9');
}

/**
 *  * is_number - checks if a string is a valid number
 *   * @s: the string to check
 *    * Return: 1 if s is a valid number, 0 otherwise
 *     */
int is_number(char *s)
{
	    while (*s)
		        {
				        if (!is_digit(*s))
						            return (0);
					        s++;
						    }
	        return (1);
}

/**
 *  * print_error - prints an error message and exits with status 98
 *   */
void print_error(void)
{
	    write(2, "Error\n", 6);
	        exit(98);
}

/**
 *  * main - entry point
 *   * @argc: the number of arguments
 *    * @argv: the array of arguments
 *     * Return: 0 on success, 98 on error
 *      */
int main(int argc, char **argv)
{
	    char *result;

	        /* check the number of arguments */
	        if (argc != 3)
			        print_error();

		    /* check if the arguments are valid numbers */
		    if (!is_number(argv[1]) || !is_number(argv[2]))
			            print_error();

		        /* multiply the numbers and get the result */
		        result = mul(argv[1], argv[2]);
			    if (!result)
				            print_error();

			        /* print the result and free it */
			        printf("%s\n", result);
				    free(result);

				        return (0);
}
