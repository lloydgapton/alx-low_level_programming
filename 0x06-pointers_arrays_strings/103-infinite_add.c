char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
    int len1 = 0;
    while (n1[len1]) {
        len1++;
    }
    int len2 = 0;
    while (n2[len2]) {
        len2++;
    }
    int len = len1 > len2 ? len1 : len2;
    if (len + 1 > size_r) {
        return 0;
    }
    int carry = 0;
    int i = len1 - 1;
    int j = len2 - 1;
    int k = len;
    r[k] = '\0';
    while (i >= 0 || j >= 0) {
        int sum = carry;
        if (i >= 0) {
            sum += n1[i] - '0';
            i--;
        }
        if (j >= 0) {
            sum += n2[j] - '0';
            j--;
        }
        if (sum >= 10) {
            carry = 1;
            sum -= 10;
        } else {
            carry = 0;
        }
        k--;
        r[k] = sum + '0';
    }
    if (carry == 1) {
        k--;
        if (k < 0) {
            return 0;
        }
        r[k] = '1';
    }
    return &r[k];
}
