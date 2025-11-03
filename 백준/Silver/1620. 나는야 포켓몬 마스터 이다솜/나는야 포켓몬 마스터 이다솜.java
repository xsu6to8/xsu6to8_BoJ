import java.util.HashMap;
import java.util.HashSet;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        int M = sc.nextInt();
        sc.nextLine();

        HashMap<Integer, String> pokemonByNumber = new HashMap<>();
        HashMap<String, Integer> pokemonByName = new HashMap<>();

        for (int i = 1; i <= N; i++) {
            String name = sc.nextLine();
            pokemonByNumber.put(i, name);
            pokemonByName.put(name, i);
        }

        for (int j = 0; j < M; j++) {
            String input = sc.nextLine();

            if (Character.isDigit(input.charAt(0))) {
                int tempKey = Integer.parseInt(input);
                System.out.println(pokemonByNumber.get(tempKey));
            }
            else {
                System.out.println(pokemonByName.get(input));
            }
        }

        sc.close();
    }
}
