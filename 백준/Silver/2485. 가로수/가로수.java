import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.ArrayList;
import java.util.Scanner;

public class Main {
    public static int getGCD (int num1, int num2) {
        if (num1 % num2 == 0) {
            return num2;
        }
        return getGCD(num2, num1 % num2);
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int N = sc.nextInt();
        ArrayList<Integer> pos = new ArrayList<>();
        ArrayList<Integer> gap = new ArrayList<>();

        for (int i = 0; i < N; i++) {
            pos.add(sc.nextInt());
            if (i > 0) {
                int tempGap = pos.get(i) - pos.get(i - 1);
                gap.add(tempGap);
            }
        }

        int gcd = gap.get(0);
        for (int i = 1; i < gap.size(); i++) {
            gcd = getGCD(gap.get(i), gcd);
        }

        int countTrees = 0;
        for (int g : gap) {
            countTrees += (g / gcd) - 1;
        }

        System.out.println(countTrees);
    }
}
