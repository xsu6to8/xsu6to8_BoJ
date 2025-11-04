import java.util.HashSet;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        int count = 0;

        Scanner sc = new Scanner(System.in);
        String num = sc.nextLine();
        String[] numStr = num.split(" ");

        int N = Integer.parseInt(numStr[0]);
        int M = Integer.parseInt(numStr[1]);

        HashSet<String> strSet = new HashSet<>();
        for(int i = 0; i < N; i++)
            strSet.add(sc.nextLine());

        for(int i = 0; i < M; i++) {
            String compareStr = sc.nextLine();
            if (strSet.contains(compareStr))
                count++;
        }

        System.out.println(count);
    }
}
