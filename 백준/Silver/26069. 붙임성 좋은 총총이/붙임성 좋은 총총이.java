import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.HashSet;
import java.util.StringTokenizer;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer(br.readLine());
        int n = Integer.parseInt(st.nextToken());

        HashSet<String> metPeople = new HashSet<>();
        metPeople.add("ChongChong");

        for (int i = 0; i < n; i++) {
            StringTokenizer st2 = new StringTokenizer(br.readLine());
            String p1 = st2.nextToken();
            String p2 = st2.nextToken();
            if(metPeople.contains(p1) || metPeople.contains(p2)) {
                metPeople.add(p1);
                metPeople.add(p2);
            }
            else
                continue;
        }

        System.out.println(metPeople.size());
        br.close();
    }
}
