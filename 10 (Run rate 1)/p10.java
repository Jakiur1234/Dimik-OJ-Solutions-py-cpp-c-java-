import java.util.Scanner;

public class Main {
    static void solve() {
        // Your solution code goes here
    }

    public static void main(String[] args) {
        // #ifndef ONLINE_JUDGE
        //     // freopen("input.txt", "r", System.in);
        //     // freopen("output.txt", "w", System.out);
        // #endif

        Scanner scanner = new Scanner(System.in);

        int tc = scanner.nextInt();

        for (int i = 0; i < tc; i++) {
            double op_run = scanner.nextDouble();
            double our_run = scanner.nextDouble();
            double ball_left = scanner.nextDouble();

            double c_run_rate, r_run_rate;

            c_run_rate = (our_run / (300 - ball_left)) * 6.0;

            if (our_run > op_run) {
                r_run_rate = 0.00;
            } else {
                r_run_rate = (((op_run - our_run) + 1) / ball_left) * 6.0;
            }

            System.out.printf("%.2f %.2f\n", c_run_rate, r_run_rate);
        }
    }
}
