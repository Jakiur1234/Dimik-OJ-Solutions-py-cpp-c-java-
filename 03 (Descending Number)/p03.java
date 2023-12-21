public class Main {
    static void solve() {
        // Your solution code goes here
    }

    public static void main(String[] args) {
        // #ifndef ONLINE_JUDGE
        //     // freopen("input.txt", "r", System.in);
        //     // freopen("output.txt", "w", System.out);
        // #endif

        int count = 0;

        for (int i = 1000; i >= 1; i--) {
            System.out.print(i + "\t");
            count++;

            if (count == 5) {
                System.out.println();
                count = 0;
            }
        }
    }
}
