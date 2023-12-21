#include <stdio.h>
#include<string.h>

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
        char number[20];
        scanf("%s", number);
        int first, last;

        // Declare stringstream
        sscanf(number, "%1d", &first);
        sscanf(number + strlen(number) - 1, "%1d", &last);

        // Now print the sum of the integer
        printf("Sum = %d\n", first + last);
    }
    return 0;
}
