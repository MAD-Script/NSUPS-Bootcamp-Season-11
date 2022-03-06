import java.util.Scanner;

public class J_NearlyLuckyNumber {

  public static void main(String[] args) {
    long num;
    int count = 0;
    Scanner input = new Scanner(System.in);

    num = input.nextLong();
    while (num > 0) {
      if (num % 10 == 4 || num % 10 == 7) count++;
      num /= 10;
    }
    System.out.println((count == 4 || count == 7) ? "YES" : "NO");
    input.close();
}
}
