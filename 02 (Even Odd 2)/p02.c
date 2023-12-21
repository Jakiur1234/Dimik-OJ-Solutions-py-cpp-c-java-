#include <stdio.h>
#include<string.h>

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
        char s[20];
        int lastNumber;
        scanf("%s", s);

        lastNumber = s[strlen(s) - 1] - '0';

        if (lastNumber % 2 == 0) {
            printf("even\n");
        } else {
            printf("odd\n");
        }
    }
    return 0;
}
