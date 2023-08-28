/**
 * _strspn - Function that gets the length of a prefix substring
 * @s: This is the string literal
 * @accept: This is the second string
 *
 * Return: number of bytes in the initial segment of s which consist only of
 * bytes from accept
 */
#include "main.h"

unsigned int _strspn(char *s, char *accept) {
    unsigned int count = 0;
    int is_accept = 1;

    while (*s && is_accept) {
        char *a = accept;
        is_accept = 0;

        while (*a) {
            if (*s == *a) {
                is_accept = 1;
                break;
            }
            a++;
        }

        if (is_accept) {
            count++;
            s++;
        }
    }

    return (count);
}
