#include <stdio.h>

void _putchar(char c) {
    putchar(c);
}

void times_table(void) {
    for (int i = 0; i <= 9; i++) {
        for (int j = 0; j <= 9; j++) {
            int result = i * j;

            if (result < 10) {
                _putchar(result + '0');
            } else {
                _putchar(result / 10 + '0');
                _putchar(result % 10 + '0');
            }

            if (j != 9) {
                _putchar(',');
                _putchar(' ');
            }
        }
        _putchar('\n');
    }
}

int main() {
    times_table();
    return 0;
}
