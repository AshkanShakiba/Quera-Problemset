import java.util.Scanner;

public class Q1 {
    static Scanner scanner = new Scanner(System.in);

    public static void main(String[] args) {
        int[] x = new int[5];
        int[] y = new int[5];
        for (int i = 0; i < 5; i++) {
            x[i] = scanner.nextInt();
        }
        for (int i = 0; i < 5; i++) {
            y[i] = scanner.nextInt();
        }
        for (int i = 0; i < 5; i++) {
            for (int j = 0; j < 5; j++) {
                int number = ((x[i] + y[j]) % 10) * 100 + ((x[(i + 1)%5] + y[(j + 1)%5]) % 10) * 10 + ((x[(i + 2)%5] + y[(j + 2)%5]) % 10);
                if (number % 6 == 0) {
                    System.out.println("Boro joloo :)");
                    System.exit(0);
                }
            }
        }
        System.out.println("Gir oftadi :(");
    }
}
