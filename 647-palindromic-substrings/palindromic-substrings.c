int countSubstrings(char* s) {
    int l = 0;
    int r = 0;
    int count = 0;
    int n = strlen(s);
    while (l <= r) {
        r = l;
        while (r < n) {
            int i = l;
            int j = r;
            int p = 1;
            while (i < j) {
                if (s[i] != s[j]) {
                    p = 0;
                    break;
                }
                i++;
                j--;
            }
            if (p) {
                count++;
            }
            r++;
        }
        l++;
    }
    return count;
}