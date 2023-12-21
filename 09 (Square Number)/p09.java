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
            int num = scanner.nextInt();

            // sqrt(10) = 3.16 but it is an integer, so it will assign just 3
            int p = (int) Math.sqrt(num);

            // check if p*p = number. We find 3*3 != 10. So 10 is not a perfect square number
            if (p * p == num) {
                System.out.println("YES");
            } else {
                System.out.println("NO");
            }
        }
    }
}
