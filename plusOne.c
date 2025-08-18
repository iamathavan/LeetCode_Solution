/*

111 / 111 test cases passed.
Status: Accepted
Runtime: 0 ms
Memory Usage: 9.4 MB
*/
char* addBinary(char* a, char* b) {
    int i = strlen(a) - 1;
    int j = strlen(b) - 1;
    int maxLen = (i > j ? i : j) + 2;
    char* res = (char*)malloc(maxLen + 1);
    int k = 0;
    int carry = 0;

    while (i >= 0 || j >= 0 || carry) {
        int bitA = (i >= 0) ? a[i] - '0' : 0;
        int bitB = (j >= 0) ? b[j] - '0' : 0;

        int sum = bitA + bitB + carry;
        res[k++] = (sum % 2) + '0';
        carry = sum / 2;

        i--;
        j--;
    }
    res[k] = '\0';

    for (int l = 0, r = k - 1; l < r; l++, r--) {
        char tmp = res[l];
        res[l] = res[r];
        res[r] = tmp;
    }
    return res;
}
