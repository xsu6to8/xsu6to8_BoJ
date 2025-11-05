import java.io.*;
import java.util.StringTokenizer;

public class Main{
    public static void recursion(String s, int l, int r, int cnt){
        if(l >= r) {
            System.out.printf("1 %d\n", cnt);
        }
        else if(s.charAt(l) != s.charAt(r)) {
            System.out.printf("0 %d\n", cnt);
        }
        else {
            cnt = cnt + 1;
            recursion(s, l+1, r-1, cnt);
        }
    }
    public static void isPalindrome(String s){
        recursion(s, 0, s.length()-1, 1);
    }
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));

        int n = Integer.parseInt(br.readLine());

        for (int i = 0; i < n; i++) {
            String testStr = br.readLine();
            isPalindrome(testStr);
        }
    }
}