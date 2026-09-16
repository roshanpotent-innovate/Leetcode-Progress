#include <string.h>
int isvowel(char c) {
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U';
}
char* reverseVowels(char* s) {
    int l = 0;
    int r = strlen(s) - 1;
    while (l < r) {
        while(l<r && !isvowel(s[l])){
            l++;
        }
        while(l<r && !isvowel(s[r])){
            r--;
        }
        if (l<r) {
            int temp = s[r];
            s[r] = s[l];
            s[l] = temp;
            l++;
            r--;
        }
    }
    return s;
}