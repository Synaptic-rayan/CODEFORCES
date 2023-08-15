import java.util.Scanner;

public class Capitalization {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        String a = in.nextLine();
        char[] ch = a.toCharArray();
        ch[0] =Character.toUpperCase(ch[0]);
        System.out.println(ch);
    }
}
