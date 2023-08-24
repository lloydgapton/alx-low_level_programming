void print_buffer(char *b, int size)
{
    if (size <= 0) {
        char newline = '\n';
        write(1, &newline, 1);
        return;
    }
    int i = 0;
    while (i < size) {
        char hex[8];
        int_to_hex(i, hex);
        write(1, hex, 8);
        write(1, " ", 1);
        for (int j = 0; j < 10; j++) {
            if (i + j < size) {
                char hex[2];
                byte_to_hex(b[i + j], hex);
                write(1, hex, 2);
            } else {
                write(1, "  ", 2);
            }
            if (j % 2 == 1) {
                write(1, " ", 1);
            }
        }
        for (int j = 0; j < 10; j++) {
            if (i + j < size) {
                char c = b[i + j];
                if (isprint(c)) {
                    write(1, &c, 1);
                } else {
                    char dot = '.';
                    write(1, &dot, 1);
                }
            }
        }
        char newline = '\n';
        write(1, &newline, 1);
        i += 10;
    }
}

void int_to_hex(int n, char *hex)
{
    for (int i = 7; i >= 0; i--) {
        int digit = n % 16;
        n /= 16;
        if (digit < 10) {
            hex[i] = digit + '0';
        } else {
            hex[i] = digit - 10 + 'a';
        }
    }
}

void byte_to_hex(char b, char *hex)
{
    int digit = b / 16;
    if (digit < 10) {
        hex[0] = digit + '0';
    } else {
        hex[0] = digit - 10 + 'a';
    }
    digit = b % 16;
    if (digit < 10) {
        hex[1] = digit + '0';
    } else {
        hex[1] = digit - 10 + 'a';
    }
}
