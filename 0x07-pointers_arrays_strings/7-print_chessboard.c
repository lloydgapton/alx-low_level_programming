/**
 * print_chessboard - Write a function that prints the chessboard.
 *
 * @a: This is my variable
 *
 */
#include "main.h"
void _putchar(char c); // Declaration of _putchar function

void print_chessboard(char (*a)[8]) {
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            char piece = a[i][j];
            _putchar(piece);
          
            _putchar(' ');
        }
        _putchar('\n');
    }
}
