#include <stdio.h>

void solve() {
    // Your solution code goes here
}

int main() {
    #ifndef ONLINE_JUDGE
        //freopen("input.txt", "r", stdin);
        //freopen("output.txt", "w", stdout);
    #endif

    int tc;
    scanf("%d", &tc);

    for (int i = 0; i < tc; i++) {
        int number;
        scanf("%d", &number);

        if (number % 2 == 0) {
            printf("even\n");
        } else {
            printf("odd\n");
        }
    }
    return 0;
}
