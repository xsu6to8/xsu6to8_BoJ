import java.io.*;

public class Main {
    public static int fibo (int num) {
        if (num == 0) {
            return 0;
        } else if (num == 1) {
          return 1;
        } else {
            return fibo(num - 1) + fibo(num - 2);
        }
    }

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));

        int n = Integer.parseInt(br.readLine());

        int result = fibo(n);

        bw.write(String.valueOf(result));

        bw.flush();
        bw.close();
        br.close();
    }
}
