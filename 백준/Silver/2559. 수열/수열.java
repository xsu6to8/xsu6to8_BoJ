import java.io.*;
import java.util.StringTokenizer;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));

        StringTokenizer st = new StringTokenizer(br.readLine());
        int N = Integer.parseInt(st.nextToken()); 
        int K = Integer.parseInt(st.nextToken()); 

        int[] temperatures = new int[N];
        st = new StringTokenizer(br.readLine());
        for (int i = 0; i < N; i++) {
            temperatures[i] = Integer.parseInt(st.nextToken());
        }
        
        int sumTem = 0;
        for (int i = 0; i < K; i++) {
            sumTem += temperatures[i];
        }
        
        int maxSum = sumTem;

        for (int i = K; i < N; i++) {
            sumTem = sumTem - temperatures[i - K] + temperatures[i]; 
            if (sumTem > maxSum) {
                maxSum = sumTem;
            }
        }

        bw.write(String.valueOf(maxSum)); 
        bw.flush();
        bw.close();
        br.close();
    }
}
