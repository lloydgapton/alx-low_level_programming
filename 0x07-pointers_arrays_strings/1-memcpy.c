/**
 * _memcpy - copies n bytes from memory area src to memory area dest
 */

#include "main.h"
char *_memcpy(char *dest, char *src, unsigned int n) {
    char *original_dest = dest;
    
    while (n--) {
        *dest = *src;
        dest++;
        src++;
    }
    
    return (original_dest);
}
