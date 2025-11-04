import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        while(true) {
            int num = sc.nextInt(); //  1 ≤ n ≤ 123,456
            if (num == 0)
                break;

            int count = 0;
            int range = 2 * num;
            boolean[] isPrime = new boolean[range + 1];
            for (int i = 2; i <= range; i++)
                isPrime[i] = true;


            for (int i = 2; i <= Math.sqrt(range); i++) {
                if (isPrime[i]) {
                    for (int j = i * i; j <= range; j += i) {
                        isPrime[j] = false;
                    }
                }
            }

            for (int i = num + 1; i <= range; i++) {    //  문제 조건 잘 읽자..
                if (isPrime[i]) {
                    count++;
                }
            }

            System.out.println(count);
        }
    }
}
