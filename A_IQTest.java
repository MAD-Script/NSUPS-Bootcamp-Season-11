import java.util.Scanner;

public class A_IQTest {

  public static void main(String[] args) {
    int count;
    int num1;
    int even = 0;
    int odd = 0;
    Scanner input = new Scanner(System.in);

    while (true) {
      count = input.nextInt();
      if (count >= 3 && count <= 100) break;
    }

    int[] num = new int[count];

    for (int i = 0; i < count; i++) {
      while (true) {
        num1 = input.nextInt();
        if (num1 <= 100) break;
      }
      num[i] = num1;
      if (num[i] % 2 == 0) even++;
      if (num[i] % 2 != 0) odd++;
    }

    if (even == 1) {
      for (int i = 0; i < count; i++) {
        if (num[i] % 2 == 0) System.out.println(i + 1);
      }
    } else if (odd == 1) {
      for (int i = 0; i < count; i++) {
        if (num[i] % 2 != 0) System.out.println(i + 1);
      }
    }
    input.close();
  }
}
