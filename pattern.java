import java.io.IOException;
import java.util.Scanner;

public class pattern {

    public static void main(String[]args)throws IOException {
  Scanner sc= new Scanner(System.in);
  int n=sc.nextInt();
//   int m=sc.nextInt();
//         for(int i=0;i<n;i++){
//             for(int j=0;j<i;j++){
//                 System.out.print("*");
//             }
//             System.out.print("\n");
//         }
//upper part
            for(int i=1;i<=n;i++){
                for(int j=1;j<=i;j++){
                    System.out.print("*");
                }
                int sp=2*(n-i);
                for(int j=1;j<=sp;j++){
                    System.out.print(" ");
                }
                for(int j=1;j<=i;j++){
                    System.out.print("*");
                }
                System.out.println();
            }
            for(int i=n-1;i>=1;i--){
                for(int j=1;j<=i;j++){
                    System.out.print("*");
                }
                int sp=2*(n-i);
                for(int j=1;j<=sp;j++){
                    System.out.print(" ");
                }
                for(int j=1;j<=i;j++){
                    System.out.print("*");
                }
                System.out.println();
            }
    }
}