import java.util.Scanner;

public class Main {
    static void solve() {
        // Your solution code goes here
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        int tc = scanner.nextInt();

        for (int i = 0; i < tc; i++) {
            int number = scanner.nextInt();

            if (number % 2 == 0) {
                System.out.println("even");
            } else {
                System.out.println("odd");
            }
        }
    }
}
