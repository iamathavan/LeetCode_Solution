/*
83 / 83 test cases passed.
Status: Accepted
Runtime: 0 ms
Memory Usage: 8 MB
*/
int strStr(char* haystack, char* needle) {
    if (strlen(needle) == 0) {
        return 0;
    }
    
    int haystackLen = strlen(haystack);
    int needleLen = strlen(needle);
    
    if (needleLen > haystackLen) {
        return -1;
    }
    
    for (int i = 0; i <= haystackLen - needleLen; i++) {
        int j;
        
        for (j = 0; j < needleLen; j++) {
            if (haystack[i + j] != needle[j]) {
                break;  
            }
        }
        
        if (j == needleLen) {
            return i;  
        }
    }
    
    return -1;  
}
