#include "main.h"

void _putchar(char c);  // Function declaration for _putchar

void print_alphabet(void) {
    char letter = 'a';
    while (letter <= 'z') {
        _putchar(letter);
        letter++;
    }
    _putchar('\n');
}
void _putchar(char c) 
    putchar(c);
}

int main() {
    print_alphabet();
    return 0;
}

