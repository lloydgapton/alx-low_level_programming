#include <stdio.h>

void _putchar(char c);  // Function declaration for _putchar

void print_alphabet(void) {
    char letter = 'a';
    while (letter <= 'z') {
        _putchar(letter);
        letter++;
    }
    _putchar('\n');
}

// This is a simplified version of the _putchar function for demonstration purposes.
// In a real program, you would need a proper implementation of _putchar.
void _putchar(char c) {
    // Replace this line with the actual code to output a character.
    // For example, you could use system calls or standard library functions.
    // This is just a placeholder to demonstrate the concept.
    putchar(c);
}

int main() {
    print_alphabet();
    return 0;
}

