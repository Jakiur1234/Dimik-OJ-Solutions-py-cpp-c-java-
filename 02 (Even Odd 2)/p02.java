import java.util.Scanner;

public class Main {
    static void solve() {
        // Your solution code goes here
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        int tc = scanner.nextInt();

        for (int i = 0; i < tc; i++) {
            String s = scanner.next();
            int lastNumber = Character.getNumericValue(s.charAt(s.length() - 1));

            if (lastNumber % 2 == 0) {
                System.out.println("even");
            } else {
                System.out.println("odd");
            }
        }
    }
}
