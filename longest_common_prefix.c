//Two Sum(beats 98.98%)
//Time:2ms
//Memory:44.9mb
char* longestCommonPrefix(char** strs, int strsSize) {
    if (strsSize == 0) return "";

    int i, j;
    for (i = 0; strs[0][i]; i++) {
        for (j = 1; j < strsSize; j++) {
            if (strs[j][i] != strs[0][i]) {
                char* prefix = (char*)malloc(i + 1);
                strncpy(prefix, strs[0], i);
                prefix[i] = '\0';
                return prefix;
            }
        }
    }
    char* prefix = (char*)malloc(i + 1);
    strcpy(prefix, strs[0]);
    return prefix;
}
