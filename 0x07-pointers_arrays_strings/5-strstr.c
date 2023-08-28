**
 * _strstr - Write a function that locates a substring.
 *
 * @haystack: This is the input string
 * @needle: This is a find to locate in the string
 *
 * Return: a pointer to the beginning of the located substring, or NULL if the
 * substring is not found.
 */
#include "main.h"
  
char *_strstr(char *haystack, char *needle) {
    while (*haystack) {
        char *h = haystack;
        char *n = needle;
        int match = 1;

        while (*n) {
            if (*h != *n) {
                match = 0;
                break;
            }
            h++;
            n++;
        }

        if (match) {
            return haystack;
        }

        haystack++;
    }

    return NULL; 
}
