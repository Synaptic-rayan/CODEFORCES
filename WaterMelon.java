import java.util.Scanner;
public class WaterMelon {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int a= in.nextInt();
        if(a>2) {
            if (a % 2 == 0) {
                System.out.println("YES");
            } else {
                System.out.println("NO");
            }
        }
        else{
            System.out.println("NO");
        }
    }
}
