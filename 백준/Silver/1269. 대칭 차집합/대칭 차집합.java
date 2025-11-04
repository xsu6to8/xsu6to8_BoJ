import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.HashSet;
import java.util.StringTokenizer;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer(br.readLine());

        int aSize = Integer.parseInt(st.nextToken());
        int bSize = Integer.parseInt(st.nextToken());

        HashSet<Integer> a = new HashSet<>();
        st = new StringTokenizer(br.readLine());
        for (int i = 0; i < aSize; i++) {
            a.add(Integer.parseInt(st.nextToken()));
        }

        HashSet<Integer> b = new HashSet<>();
        st = new StringTokenizer(br.readLine());
        for (int i = 0; i < bSize; i++) {
            b.add(Integer.parseInt(st.nextToken()));
        }

        HashSet<Integer> aMinusb = new HashSet<>(a);
        aMinusb.removeAll(b);

        HashSet<Integer> bMinusa = new HashSet<>(b);
        bMinusa.removeAll(a);

        HashSet<Integer> result = new HashSet<>(aMinusb);
        result.addAll(bMinusa);

        System.out.println(result.size());
    }
}
