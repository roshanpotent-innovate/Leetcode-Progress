#include <string.h>
char* longestPalindrome(char* s) {
    int ml = 0;
    int sl = 0;
    int n = strlen(s);
    for (int i = 0; i < n; i++) {
        int l = i;
        int r = i;
        while (l >= 0 && r < n && s[l] == s[r]) {
            int len = r - l + 1;
            if (len > ml) {
                ml = len;
                sl = l;
            }
            l--;
            r++;
        }
        l = i;
        r = i + 1;
        while (l >= 0 && r < n && s[l] == s[r]) {
            int len = r - l + 1;
            if (len > ml) {
                ml = len;
                sl = l;
            }
            l--;
            r++;
        }
    }
    s[sl + ml] = '\0';
    if (sl > 0) {
        memmove(s, s + sl, ml + 1);
    }
    return s;
}