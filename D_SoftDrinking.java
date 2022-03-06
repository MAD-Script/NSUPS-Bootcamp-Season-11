import java.util.Scanner;

public class D_SoftDrinking {

    public static void main(String[] args) {
        int friendn;
        int bottle;
        int amount;
        int limes;
        int slices;
        int salt;
        int mlPToast;
        int saltPToast;

        int mlToast;
        int sliceToast;
        int saltToast;
        int toast;

        Scanner input = new Scanner(System.in);
        
        friendn= input.nextInt();
        bottle= input.nextInt();
        amount= input.nextInt();
        limes= input.nextInt();
        slices= input.nextInt();
        salt= input.nextInt();
        mlPToast= input.nextInt();
        saltPToast= input.nextInt();


        mlToast = (bottle*amount)/mlPToast;
        sliceToast = limes*slices;
        saltToast = salt / saltPToast;

        toast = minimum(mlToast,sliceToast,saltToast);

        System.out.println(toast/friendn);
        
        input.close();
    }

    public static int minimum(int A, int B , int C){
            if (A<B && A<C)return A;
            else if(B<A && B<C)return B;
            else return C;
    }
}