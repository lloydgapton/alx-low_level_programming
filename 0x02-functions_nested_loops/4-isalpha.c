int _isalpha(int c) {
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
        return 1;  // Return 1 if c is an alphabetic character
    } else {
        return 0;  // Return 0 if c is not an alphabetic character
    }
}
