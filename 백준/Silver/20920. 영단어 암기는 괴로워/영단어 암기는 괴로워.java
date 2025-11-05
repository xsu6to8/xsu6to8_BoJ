import java.io.*;
import java.nio.Buffer;
import java.util.*;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        StringTokenizer st = new StringTokenizer(br.readLine());

        int N = Integer.parseInt(st.nextToken());
        int M = Integer.parseInt(st.nextToken());

        HashMap<String, Integer> numMap = new HashMap<>();

        for (int i = 0; i < N; i++) {
            String inputWord = br.readLine();
            if (inputWord.length() < M)
                continue;
            numMap.put(inputWord, numMap.getOrDefault(inputWord, 0) + 1);
        }

        List<String> wordList = new ArrayList<>(numMap.keySet());

        // 우선 순위에 따라 비교 람다 활용해서 compareTo 구현
        wordList.sort((o1, o2) -> {
            int c1 = numMap.get(o1); // 빈도수
            int c2 = numMap.get(o2); // 빈도수

            if (c1 == c2) { // 빈도수가 같은경우
                if (o1.length() == o2.length()) { // 단어 길이가 같은경우
                    return o1.compareTo(o2); // 알파뱃 순서로
                }
                return o2.length() - o1.length(); // 단어가 길수록 앞에 위치
            }
            return c2 - c1; // 빈도수가 높은 단어가 앞으로
        });

        for(int i = 0; i < wordList.size(); i++){
            bw.write(wordList.get(i) + "\n");
        }

        bw.flush();
        bw.close();
    }
}
