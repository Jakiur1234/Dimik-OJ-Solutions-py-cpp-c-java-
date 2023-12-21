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
            String number = scanner.next();
            int first = Character.getNumericValue(number.charAt(0));
            int last = Character.getNumericValue(number.charAt(number.length() - 1));

            // Now print the sum of the integer
            System.out.println("Sum = " + (first + last));
        }
    }
}
