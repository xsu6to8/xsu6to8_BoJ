import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();

        ArrayList<Integer> numsArrayList = new ArrayList<>();
        HashMap<Integer, Integer> numCount = new HashMap<>();
        int sum = 0;

        for (int i = 0; i < n; i++) {
            int temp = sc.nextInt();
            numsArrayList.add(temp);
            sum += temp;
            numCount.put(temp, numCount.getOrDefault(temp, 0) + 1);
        }

        numsArrayList.sort(Comparator.naturalOrder());

        // A1
        System.out.println(Math.round((double) sum / n));

        // A2
        System.out.println(numsArrayList.get((n - 1) / 2));

        // 최빈값 계산
        int maxCnt = Collections.max(numCount.values());    //  Collection 은 List, Set, Queue, (Map) 그룹으로 묶어 관리
        ArrayList<Integer> modeList = new ArrayList<>();

        for (Map.Entry<Integer, Integer> entry : numCount.entrySet()) {
            if (entry.getValue() == maxCnt) {
                modeList.add(entry.getKey());
            }
        }

        Collections.sort(modeList);

        // A3
        if (modeList.size() > 1) {
            System.out.println(modeList.get(1));
        } else {
            System.out.println(modeList.get(0));
        }

        // A4
        System.out.println(numsArrayList.get(n - 1) - numsArrayList.get(0));

        sc.close();
    }
}
