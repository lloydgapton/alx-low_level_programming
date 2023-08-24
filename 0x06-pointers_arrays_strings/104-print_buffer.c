#include <stdio.h>
#include <ctype.h>
#include "main.h"

void print_buffer(char *b, int size)
{
    if (size <= 0) {
        printf("\n");
        return;
    }
    int i = 0;
    while (i < size) {
        printf("%08x ", i);
        for (int j = 0; j < 10; j++) {
            if (i + j < size) {
                printf("%02x", b[i + j]);
            } else {
                printf("  ");
            }
            if (j % 2 == 1) {
                printf(" ");
            }
        }
        for (int j = 0; j < 10; j++) {
            if (i + j < size) {
                if (isprint(b[i + j])) {
                    printf("%c", b[i + j]);
                } else {
                    printf(".");
                }
            }
        }
        printf("\n");
        i += 10;
    }
}
