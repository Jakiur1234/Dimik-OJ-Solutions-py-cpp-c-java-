#include <stdio.h>
#include <math.h>

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
        int num;
        scanf("%d", &num);

        // sqrt(10) = 3.16 but it is an integer, so it will assign just 3
        int p = sqrt(num);

        // check if p*p = number. We find 3*3 != 10. So 10 is not a perfect square number
        if (p * p == num) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }
    return 0;
}
