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
            int number = scanner.nextInt();

            // Print the case number
            System.out.print("Case " + (i + 1) + ": ");

            // Continue the loop from 1 to the number
            for (int j = 1; j < number; j++) {
                // If the number is divisible by j, then print j because it is a divisor of the number
                if (number % j == 0) {
                    System.out.print(j + " ");
                }
            }

            System.out.println(number);
        }
    }
}
