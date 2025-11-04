import java.io.*;
import java.util.HashSet;
import java.util.Scanner;
import java.util.TreeSet;

public class Main {
    public static void main(String[] args) throws IOException {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        int M = sc.nextInt();

        sc.nextLine();

        TreeSet<String> unheardOnes = new TreeSet<>();
        TreeSet<String> unseenOnes = new TreeSet<>();
        for (int i = 0; i < N + M; i++) {
            if (i < N) {
                unheardOnes.add(sc.nextLine());
            } else {
                unseenOnes.add(sc.nextLine());
            }
        }

        TreeSet<String> totalSet = new TreeSet<>(unseenOnes);
        totalSet.retainAll(unheardOnes);

        System.out.println(totalSet.size());
        for (String name : totalSet) {
            System.out.println(name);
        }
        sc.close();
    }
}
