import java.util.Scanner;

public class wayToolongWords {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);

        int r = in.nextInt();
        String [] words = new String[r+1];
        for (int j = 0; j < words.length; j++) {
            words[j] = in.nextLine();
        }
        for (int i = 0; i < words.length; i++) {
        if(words[i].length() <= 10){
            System.out.print(words[i]);
        }
        else{
            System.out.print(words[i].charAt(0));
            System.out.print(words[i].length() - 2);
            System.out.print(words[i].charAt(words[i].length()-1));
        }
            System.out.println();
        }


    }
}