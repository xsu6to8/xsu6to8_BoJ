import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class Main {
    public static int getGCD (int num1, int num2) {
        if (num1 % num2 == 0) {
            return num2;
        }
        return getGCD(num2, num1%num2);
    }

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        StringTokenizer st1 = new StringTokenizer(br.readLine());
        int numerator1 = Integer.parseInt(st1.nextToken()); // 분자
        int denominator1 = Integer.parseInt(st1.nextToken()); // 분모

        StringTokenizer st2 = new StringTokenizer(br.readLine());
        int numerator2 = Integer.parseInt(st2.nextToken()); // 분자
        int denominator2 = Integer.parseInt(st2.nextToken()); // 분모

        int calculatedNumerator = (numerator1 * denominator2) + (numerator2 * denominator1);
        int calculatedDenominator = denominator1 * denominator2;

        int gcd = getGCD(calculatedDenominator, calculatedNumerator);
        calculatedNumerator /= gcd;
        calculatedDenominator /= gcd;

        System.out.printf("%d %d", calculatedNumerator, calculatedDenominator);
        br.close();
    }
}
