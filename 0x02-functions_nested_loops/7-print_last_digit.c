int print_last_digit(int num) {
    int last_digit = num % 10;
    _putchar(last_digit + '0'); // Display the last digit as a character
    return last_digit;
}
