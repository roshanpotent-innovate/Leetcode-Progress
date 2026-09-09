#include <stdio.h>
long long countCommas(long long n) {
    long long com = 0;
    long long x = 1000;
    while (x <= n) {
        com += n - x + 1;
        x *= 1000;
    }
    return com;
}
