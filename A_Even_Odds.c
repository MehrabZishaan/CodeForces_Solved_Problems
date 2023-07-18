/// https://codeforces.com/contest/318/problem/A
/// A. Even Odds

#include <stdio.h>

int main() {
    long long int n, k, d, p;
    scanf("%lld %lld", &n, &k);
    d = (n + 1) / 2;

    if (k <= d) {
        p = (k * 2) - 1;
        printf("%lld", p);
    } else if (k > d) {
        p = (k - d) * 2;
        printf("%lld", p);
    }

    return 0;
}

/*
Input:
999999999997 499999999999

Output:
999999999997
*/
