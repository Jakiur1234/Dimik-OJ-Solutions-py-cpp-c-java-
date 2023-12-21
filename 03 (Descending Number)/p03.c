 #include <stdio.h>

void solve() {
    // Your solution code goes here
}

int main() {
    #ifndef ONLINE_JUDGE
        // freopen("input.txt", "r", stdin);
        // freopen("output.txt", "w", stdout);
    #endif

    int count = 0;

    for (int i = 1000; i >= 1; i--) {
        printf("%d\t", i);
        count++;

        if (count == 5) {
            printf("\n");
            count = 0;
        }
    }
    return 0;
}
