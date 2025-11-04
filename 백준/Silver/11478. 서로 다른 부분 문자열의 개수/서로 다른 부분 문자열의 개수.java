import java.util.HashSet;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String inputStr = sc.nextLine();

        HashSet<String> strSet = new HashSet<>();

        for (int i = 0; i < inputStr.length(); i++) {
            for (int j = i + 1; j <= inputStr.length(); j++) {
                strSet.add(inputStr.substring(i, j));
            }
        }

        System.out.println(strSet.size());

        sc.close();
    }
}
