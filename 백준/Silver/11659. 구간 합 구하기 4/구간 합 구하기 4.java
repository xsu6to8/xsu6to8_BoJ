//import java.io.*;
//import java.util.StringTokenizer;
//
//public class BoJ_11659 {
//    public static void main(String[] args) throws IOException {
//        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
//        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
//        StringTokenizer st = new StringTokenizer(br.readLine());
//
//        int n = Integer.parseInt(st.nextToken());
//        int m = Integer.parseInt(st.nextToken());
//
//        int[] numArr = new int[n];
//
//        st = new StringTokenizer(br.readLine());
//        for (int i = 0; i < n; i++) {
//            numArr[i] = Integer.parseInt(st.nextToken());
//        }
//
//        for (int index = 0; index < m; index++) {
//            int sum = 0;
//            st = new StringTokenizer(br.readLine());
//            int i = Integer.parseInt(st.nextToken());
//            int j = Integer.parseInt(st.nextToken());
//
//            for (int k = i - 1; k < j; k++) {
//                sum += numArr[k];
//            }
//            bw.write(sum + "\n");
//        }
//        bw.flush();
//        bw.close();
//    }
//}




// theme : 누적합 => 입력마다 누적합을 계산해서 저장

import java.io.*;
import java.util.StringTokenizer;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        StringTokenizer st = new StringTokenizer(br.readLine());

        int n = Integer.parseInt(st.nextToken());
        int m = Integer.parseInt(st.nextToken());

        int[] numArr = new int[n + 1];

        st = new StringTokenizer(br.readLine());
        for (int i = 1; i <= n; i++) {
            numArr[0] = 0;
            numArr[i] = numArr[i - 1] + Integer.parseInt(st.nextToken());
        }

        for (int i = 0; i < m; i++) {
            st = new StringTokenizer(br.readLine());
            int from = Integer.parseInt(st.nextToken());
            int dest = Integer.parseInt(st.nextToken());

            bw.write(numArr[dest] - numArr[from - 1] + "\n");
        }

        bw.flush();
        bw.close();
    }
}