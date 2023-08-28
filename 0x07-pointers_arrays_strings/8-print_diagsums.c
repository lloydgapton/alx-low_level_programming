/**
 * print_diagsums - print the sum the diognals of a square matrix of integer
 *
 * @a: This is the array to sum
 * @size: This is the length of the array
 */
#include "main.h"
void print_diagsums(int *a, int size) {
    int sum_main_diag = 0;
    int sum_secondary_diag = 0;
  
    for (int i = 0; i < size; i++) {
        sum_main_diag += *(a + i * size + i);
        sum_secondary_diag += *(a + i * size + (size - 1 - i));
    }
    int_to_screen(sum_main_diag);
    int_to_screen(' ');
    int_to_screen(sum_secondary_diag);
    int_to_screen('\n');
}
