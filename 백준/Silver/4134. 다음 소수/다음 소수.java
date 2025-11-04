import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int loopCnt = sc.nextInt();
        for (int i = 0; i < loopCnt; i++) {
            long tempN = sc.nextLong();

            if (tempN < 2) {
                tempN = 2;
            }

            boolean isPrime = false;
            while (!isPrime) {
                isPrime = true;
                for (long j = 2; j <= Math.sqrt(tempN); j++) {
                    if (tempN % j == 0) {
                        isPrime = false;
                        break;
                    }
                }
                if (!isPrime) {
                    tempN++;
                }
            }

            System.out.println(tempN);
        }

        sc.close();
    }
}
