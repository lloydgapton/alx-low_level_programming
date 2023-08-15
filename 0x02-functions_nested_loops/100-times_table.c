#include <stdio.h>

void print_times_table(int n) {
    if (n < 0 || n > 15) {
        return; // Don't print anything for invalid n values
    }

    for (int i = 0; i <= 10; i++) {
        printf("%d x %d = %d\n", n, i, n * i);
    }
}

int main() {
    int times;
    printf("Enter a number between 0 and 15: ");
    scanf("%d", &times);

    print_times_table(times);

    return 0;
}
