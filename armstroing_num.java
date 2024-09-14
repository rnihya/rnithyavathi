package armstrong;
import java.util.*;

public class armstroing_num {

	public static void main(String[] args) {
		int i,num,digit,armstrong = 0;
		Scanner sc=new Scanner(System.in);
		System.out.println("enter a digit to check wither its armstrong number:");
		num=sc.nextInt();
		i=num;
		do {
		
			digit=num%10;
			num=num/10;
			armstrong=armstrong+digit*digit*digit;
			System.out.println("armstrong is:"+armstrong);
		}while(num>0);
	
		if(armstrong==i) {
			System.out.println("the given"+i+" is a armstrong num");
		}
			else {
				System.out.println("the given"+i+" is not a armstrong num");
			}
	}
}
				
		