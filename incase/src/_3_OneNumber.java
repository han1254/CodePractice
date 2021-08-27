import java.util.Arrays;

public class _3_OneNumber {

    public static void main(String[] args) {
        System.out.println(Arrays.toString(check(8)));
        System.out.println(Arrays.toString(countBits(8)));
    }

    public static int[] countBits(int n) {
        int[] res = new int[n + 1];
        res[0] = 0;
        res[1] = 1;
        int cl = 2;
        int flag = 1;
        while(cl <= n) {
            if ((cl & (cl - 1)) == 0) {
                flag = 1;
                res[cl] = 1;
            } else {
                res[cl] += res[flag++] + 1;
            }
            cl++;
        }
        return res;
    }

    public static int[] check(int n) {

        int[] bits = new int[n + 1];
        for (int i = 1; i <= n; i++) {
            bits[i] = bits[i & (i - 1)] + 1;
        }
        return bits;


    }
}
