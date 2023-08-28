char *_strchr(char *s, char c)
{
    while (*s != '\0')
    {
        if (*s == c)
        {
            return (s);
        }
        s++;
    }
    
    if (c == '\0') {
        return (s); // Return pointer to the null terminator if c is '\0'
    }
    
    return (NULL); // Return NULL if character c is not found
}
