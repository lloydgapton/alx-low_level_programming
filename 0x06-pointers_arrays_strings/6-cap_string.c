#include "main.h"

/**
 * cap_string - Write a function that capitalizes all words of a string.
 *
 * @entry: This is the input string
 *
 * Return: String capitalized
 */
char *cap_string(char *s)
{
	int cap = 1;
	char *p = s;
	while (*p)
	{
		if (isspace(*p) || ispunct(*p))
		{
			cpa = 1;
		}
		else if (cap)
		{
			*p = topper(*p);
			cap = 0;
		}
		p++;
	}
	return (s);
}
