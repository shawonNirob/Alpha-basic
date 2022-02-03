//DecimalToBinary
package numberConversion;
import java.util.Scanner;
public class DecimalToBinary {
    public void binary(int decimal) {
        int index = 0;
        int binary[] = new int[50];
        while (decimal > 0) {
            binary[index] = decimal % 2;
            decimal = decimal / 2;
            index++;
        }
        System.out.println("Binary is: ");
        for (int i = index - 1; i >= 0; i--) {
            System.out.print(binary[i]);
        }
    }

    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        System.out.println("Enter a Decimal number:");
        int p = input.nextInt();
        DecimalToBinary obj = new DecimalToBinary();
        obj.binary(p);
    }
}
//1017. Convert to Base -2
package numberConversion;

import java.util.Scanner;

public class DecimalToBinary {
    public static String baseNeg2(int n) {
        if(n==0){
            return "0";
        }
        String ans="";
        while(n!=0){
            int r = n % (-2);
            n = n/(-2);

            if(r<0){
                r =r + (2);
                n =n + 1;
            }
        ans= String.valueOf(r) +ans;
        }return ans;
    }
    public static void main(String[] args) {

        System.out.println(baseNeg2(3));
    }
}
//
