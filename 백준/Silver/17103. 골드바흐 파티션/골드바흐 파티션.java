import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int T = sc.nextInt();

        for (int i = 0; i < T; i++){
            int evenNum = sc.nextInt();
            int count = 0;


            boolean[] isPrime = new boolean[evenNum + 1];
            for (int j = 2; j <= evenNum; j++)
                isPrime[j] = true;


            for (int j = 2; j <= Math.sqrt(evenNum); j++) {
                if (isPrime[j]) {
                    for (int k = j * j; k <= evenNum; k += j) {
                        isPrime[k] = false;
                    }
                }
            }

            for (int j = 2; j <= evenNum / 2; j++) {
                if (isPrime[j] && isPrime[evenNum - j])
                    count++;
            }

            System.out.println(count);
        }
    }
}
