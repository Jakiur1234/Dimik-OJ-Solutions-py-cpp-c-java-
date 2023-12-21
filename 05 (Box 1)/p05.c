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
        int a;
        scanf("%d", &a);

        for (int j = 0; j < a; j++) {
            for (int k = 0; k < a; k++) {
                printf("*");
            }
            printf("\n");
        }

        printf("\n");
    }
    return 0;
}
