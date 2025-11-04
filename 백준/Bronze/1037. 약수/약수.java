import java.util.ArrayList;
import java.util.Arrays;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] divisor = new int[n];

        for (int i = 0; i < n; i++) {
            divisor[i] = sc.nextInt();
        }

        Arrays.sort(divisor);
        int result = 1;

        if (n % 2 == 0)
            result = divisor[0] * divisor[n - 1];
        else
            result = divisor[(n -1) / 2] * divisor[(n -1) / 2];

        System.out.println(result);
    }
}
