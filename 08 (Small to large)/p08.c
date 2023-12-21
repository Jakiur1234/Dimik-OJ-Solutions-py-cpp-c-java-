#include <stdio.h>

void solve() {
    // Your solution code goes here
}

int main() {
#ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
#endif

    int tc;
    scanf("%d", &tc);

    for (int i = 0; i < tc; i++) {
        int a, b, c;
        int max, mid, min;

        // Input three numbers
        scanf("%d %d %d", &a, &b, &c);

        // find the maximum
        if (a > b && a > c) {
            max = a;
        } else if (b > c) {
            max = b;
        } else {
            max = c;
        }

        // find the minimum
        if (a < b && a < c) {
            min = a;
        } else if (b < c) {
            min = b;
        } else {
            min = c;
        }

        // find the other number that is not minimum or maximum. that is middle
        if ((max == a && min == b) || (min == a && max == b)) {
            mid = c;
        } else if ((max == b && min == c) || (min == b && max == c)) {
            mid = a;
        } else {
            mid = b;
        }

        printf("Case %d: %d %d %d\n", i + 1, min, mid, max);
    }
    return 0;
}
