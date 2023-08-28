/**
 * _strchr -function that locates a character in a string'
 * @s: this is the input string.
 * @c:this is the character.
 * Return: Return to the charcter found, if not , return a NULL.
 */

#include "main.h"
char *_strchr(char *s, char c)
{
    while (*s != '\0')
    {
        if (*s == c)
        {
            return (s);
        }
        s++;
    }
    
    if (c == '\0')
    {
	    return (s);
    }
    return (NULL);
}
