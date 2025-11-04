//import java.util.Arrays;
//import java.util.Scanner;
//
//public class BoJ_13909 {
//    public static void main(String[] args) {
//        Scanner sc = new Scanner(System.in);
//        int n = sc.nextInt();
//
//        int[] windows = new int[n + 1];
//
//        Arrays.fill(windows, 1);
//
//        for (int i = 2; i <= n; i++) {
//            for (int j = 1; j <= n / i; j++) {
//                if(windows[i * j] == 0)
//                    windows[i * j] = 1;
//                else
//                    windows[i * j] = 0;
//            }
//        }
//
//        int cnt = 0;
//        for (int i = 1; i <= n; i++) {
//            if(windows[i] == 1)
//                cnt++;
//        }
//        System.out.println(cnt);
//
//        sc.close();
//    }
//}


import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        sc.close();

        // N 이하의 완전제곱수의 개수는 sqrt(N)
        int result = (int) Math.sqrt(n);

        // 결과 출력
        System.out.println(result);
    }
}

//  문제 분석:
//  창문은 열고 닫는 작업이 "약수"와 관련이 있습니다. 예를 들어, 6번 창문은 6의 약수인 1, 2, 3, 6번 사람에 의해 열리고 닫힙니다.
//  중요한 점은 "완전제곱수"인 창문만이 홀수 개의 약수를 가집니다. 예를 들어, 9는 약수로 1, 3, 9를 가지며, 9번 창문은 세 번 열리고 닫히므로 결국 열려 있습니다.
//  그 외의 숫자는 짝수 개의 약수를 가지며, 결국 닫히게 됩니다.
//  해결 방법:
//  N 이하의 완전제곱수의 개수만 구하면 됩니다.
//  N 이하의 완전제곱수는 sqrt(N)입니다.