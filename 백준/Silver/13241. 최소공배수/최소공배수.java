import java.util.Scanner;

public class Main {
    public static long getGCD (long num1, long num2) {
        if (num1 % num2 == 0) {
            return num2;
        }
        return getGCD(num2, num1%num2);
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        long n1 = sc.nextLong();
        long n2 = sc.nextLong();

        long gcd = getGCD(n1, n2);

        System.out.println((n1 * n2) / gcd);

        sc.close();
    }
}
