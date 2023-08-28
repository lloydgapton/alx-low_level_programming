/**
 * _memset - fills memory with a constant byte
 * Return:Always 0
 */

#include "main.h"
#include <stdsef.h>

char *_memset(char *s, char b, unsigned int n)
{
    char *start = s;

    while (n--)
    {
        *s = b;
        s++;
    }
    return (start);
}
