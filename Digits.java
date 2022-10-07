// package Hacktober-2022;
// Program to count number of digits in an integer
import java.util.*;

class Digits {
    public static void main(String[] args) {
        System.out.println("Enter a no.");
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int c = 0;
        for (int i = n; i > 0; i /= 10) {
            c++;
        }
        System.out.println("No. of digits in " + n + " is " + c);
        // System.out.println("hi");2500
    }

}
