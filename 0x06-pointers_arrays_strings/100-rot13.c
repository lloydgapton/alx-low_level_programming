/**
 * rot13 - encodes a string using rot13
 * @s: this is an entry
 * Return : Always 0.
 */

#include "main"

char *rot13(char *s)
{
    char *p = s;

    while (*p)
    {
	    if (*p >= 'a' && *p <= 'z')
	    {
		    *p = (*p - 'a' + 13) % 26 + 'a';
	    }
	    else if (*p >= 'A' && *p <= 'Z')
	    {
		    *p = (*p - 'A' + 13) % 26 + 'A';
	    }
	    p++;
    }
    return (s);
}
