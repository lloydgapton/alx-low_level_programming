char *rot13(char *s)
{
    char *p = s;
    while (*p) {
        if (*p >= 'a' && *p <= 'z') {
            *p = (*p - 'a' + 13) % 26 + 'a';
        } else if (*p >= 'A' && *p <= 'Z') {
            *p = (*p - 'A' + 13) % 26 + 'A';
        }
        p++;
    }
    return s;
}