import java.util.HashMap;
import java.util.Map;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {

        Scanner scanner = new Scanner(System.in);
        String input;
        System.out.print("Input : s = ");
        input = scanner.nextLine();
        System.out.println(getSum(input));

    }

    public static int getSum(String s) {
        Map<Character, Integer> roms = new HashMap<>();
        roms.put('I', 1);
        roms.put('V', 5);
        roms.put('X', 10);
        roms.put('L', 50);
        roms.put('C', 100);
        roms.put('D', 500);
        roms.put('M', 1000);

        // "ID"

        int sum = 0;
        int high = 1001;
        for (int i = 0; i < s.length(); i++) {
            int x = roms.get(s.charAt(i));
            if (high < x) {
                sum += (x - high * 2);
            } else {
                sum += x;
            }
            high = x;

        }
        return sum;
    }

}