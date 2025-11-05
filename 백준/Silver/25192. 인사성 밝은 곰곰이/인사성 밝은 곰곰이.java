import java.util.HashSet;
import java.util.Scanner;

public class Main {
    public static void main (String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        sc.nextLine();

        HashSet<String> emoSet = new HashSet<>();
        int count = 0;

        for (int i = 0; i < n; i++) {
            String input = sc.nextLine();

            if (input.equals("ENTER")) {
                emoSet = new HashSet<>();
            } else {
                if (!emoSet.contains(input)) {
                    count++;
                    emoSet.add(input);  // HashSet에 추가
                }
            }
        }

        System.out.println(count);

        sc.close();
    }
}
