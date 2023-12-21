#include <stdio.h>
#include <string.h>

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
        char in[1000];
        int words = 1;
        getchar();  // Consume the newline character left in the buffer
        fgets(in, sizeof(in), stdin);

        for (int j = 0; j < strlen(in); j++) {
            if (in[j] == ' ' && in[j + 1] != ' ' && j != strlen(in) - 1) {
                words++;
            }
        }

        printf("%d\n", words);
    }
    return 0;
}
