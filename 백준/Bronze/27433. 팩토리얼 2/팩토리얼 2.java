import java.io.*;

public class Main {

    public static long facto (int num) {
        if(num == 0 || num == 1) {
            return 1;
        } else {
          return num * facto(num - 1);
        }
    }

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        int n = Integer.parseInt(br.readLine());

        long result = facto(n);

        System.out.println(result);

        br.close();
    }
}
