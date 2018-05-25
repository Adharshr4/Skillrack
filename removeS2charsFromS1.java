/* given string s1 and s2 ..remove s2 characters from s1 and print
Input:
apple
pan

Output:
le   */


import java.util.*;
public class Hello {

    public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int ind,i;
		StringBuffer str1 = new StringBuffer(sc.nextLine());
		StringBuffer str2 = new StringBuffer(sc.nextLine());
		for(i=0;i<str2.length();i++){
		    while(str1.indexOf(String.valueOf(str2.charAt(i))) != -1){
		        ind = str1.indexOf(String.valueOf(str2.charAt(i)));
		        str1.delete(ind,ind+1);   //string.delete(start , end)   //so strat is inclusive and end in exclusive
		    }
		}
		System.out.println(str1);
	}
}
