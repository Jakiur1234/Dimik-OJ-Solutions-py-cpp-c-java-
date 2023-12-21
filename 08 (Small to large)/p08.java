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
            int a = scanner.nextInt();
            int b = scanner.nextInt();
            int c = scanner.nextInt();

            // find the maximum, minimum, and middle
            int max = Math.max(a, Math.max(b, c));
            int min = Math.min(a, Math.min(b, c));
            int mid = a + b + c - max - min;

            System.out.println("Case " + (i + 1) + min + " " + mid + " " + max);
