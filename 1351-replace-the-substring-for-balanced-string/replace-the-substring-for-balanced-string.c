#include <string.h>
int balancedString(char* s) {
    int f[4] = {0};
    int n = strlen(s);
    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] == 'Q') {
            f[0]++;
        } else if (s[i] == 'W') {
            f[1]++;
        } else if (s[i] == 'E') {
            f[2]++;
        } else if (s[i] == 'R') {
            f[3]++;
        }
    }
    int req = n / 4;
    if (f[0] == req && f[1] == req && f[2] == req && f[3] == req) {
        return 0;
    }
    int left = 0;
    int ans = n;
    for (int right = 0; right < n; right++) {
        if (s[right] == 'Q') {
            f[0]--;
        } else if (s[right] == 'W') {
            f[1]--;
        } else if (s[right] == 'E') {
            f[2]--;
        } else if (s[right] == 'R') {
            f[3]--;
        }
        while (f[0] <= req && f[1] <= req && f[2] <= req && f[3] <= req) {
            int len = right - left + 1;
            if (len < ans) {
                ans = len;
            }
            if (s[left] == 'Q') {
                f[0]++;
            } else if (s[left] == 'W') {
                f[1]++;
            } else if (s[left] == 'E') {
                f[2]++;
            } else if (s[left] == 'R') {
                f[3]++;
            }
            left++;
        }
    }
    return ans;
}