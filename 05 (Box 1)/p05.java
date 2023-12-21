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

            for (int j = 0; j < a; j++) {
                for (int k = 0; k < a; k++) {
                    System.out.print("*");
                }
                System.out.println();
            }

            System.out.println();
        }
    }
}
