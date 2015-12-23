/* 
 * Author: sr1k4n7h
 */

import java.util.Scanner;

public class Solution {

    public static void main(String[] args) {
        
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        int T,N;
        @SuppressWarnings("resource")
		Scanner S = new Scanner (System.in);
        T = S.nextInt();
        for (int i=0; i<T ; i++)
            {
            N = S.nextInt();
            digits(N);
        }
    }
    
    
    static void digits(int X){
    
    int i=0,counter=0 ,rem, num;
    num = X;
    int length = (int)(Math.log10(X)+1);
    rem = X%10;
    while(i<length)
        {
        if(rem!=0)
           {
         if (X%rem==0)
            {counter++;}
           }    
        num = num/10;
            rem = num%10;
           i++;
    }
    System.out.println(counter);
}
    
}

