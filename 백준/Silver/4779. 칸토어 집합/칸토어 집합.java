import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class Main {
    static int n;
    static StringBuilder sb;

    public static void makeBlank (int start, int length) {
        if(length <= 1){
            return;
        }

        int shortenLength = length / 3;

        for(int i = start + shortenLength; i < start + shortenLength * 2; i++){
            sb.setCharAt(i, ' ');
        }

        makeBlank(start, shortenLength);
        makeBlank(start + (2 * shortenLength), shortenLength);
    }


    public static void main(String[] args) throws NumberFormatException, IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        String input = "";

        while ((input = br.readLine()) != null) {   //  JAVA의 EOF 처리
            int n = Integer.parseInt(input);
            sb = new StringBuilder();

            int numOfDash = (int) Math.pow(3, n);

            for (int i = 0; i < numOfDash; i++) {
                sb.append("-");
            }

            makeBlank(0, numOfDash);

            System.out.println(sb);
        }
    }
}
