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
        scanner.nextLine();  // Consume the newline character left in the buffer

        for (int i = 0; i < tc; i++) {
            String in = scanner.nextLine();
            int words = in.trim().split("\\s+").length;
            System.out.println(words);
        }
    }
}
