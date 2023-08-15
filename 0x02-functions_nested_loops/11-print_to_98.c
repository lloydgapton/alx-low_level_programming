#include <stdio.h>
#include "main.h"
void print_to_98(int n) {
    for (; n <= 98; n++) {
        printf("%d", n);
        if (n != 98) {
            printf(", ");
        }
    }
    printf("\n");
}

int main() {
    int start;

    printf("Enter a starting number: ");
    scanf("%d", &start);

    print_to_98(start);

    return 0;
}
