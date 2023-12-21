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
        int number;
        scanf("%d", &number);

        // Print the case number
        printf("Case %d: ", i + 1);

        // Continue the loop from 1 to the number
        for (int j = 1; j < number; j++) {
            // If the number is divisible by j, then print j because it is a divisor of the number
            if (number % j == 0) {
                printf("%d ", j);
            }
        }

        printf("%d\n", number);
    }
    return 0;
}
