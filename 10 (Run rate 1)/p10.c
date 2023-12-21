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
        double op_run, our_run, ball_left;
        scanf("%lf %lf %lf", &op_run, &our_run, &ball_left);

        double c_run_rate, r_run_rate;

        c_run_rate = (our_run / (300 - ball_left)) * 6.0;

        if (our_run > op_run) {
            r_run_rate = 0.00;
        } else {
            r_run_rate = (((op_run - our_run) + 1) / ball_left) * 6.0;
        }

        printf("%0.2lf %0.2lf\n", c_run_rate, r_run_rate);
    }
    return 0;
}
