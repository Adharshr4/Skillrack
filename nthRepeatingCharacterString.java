/*The program must print the nth repeating character in the string , if it is not present print -1

Input:
abcdaeaedbapple

Output:
d

a is the first repeating character
b is the second
and c is not repeating
d is the third repeaing so it is printed   */

//why i added list is if one char is repeating we should not check that character again

import java.util.*;
public class Hello {

    public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		String str = sc.nextLine();
		List<Character> list = new ArrayList<Character>();
		int n = sc.nextInt();
		int len = str.length(),count = 0,i;
		for(i=0;i<len;i++){
		    String subStr = str.substring(i+1 , len);
		    if(subStr.contains(String.valueOf(str.charAt(i))) && !list.contains(str.charAt(i))){
		        list.add(str.charAt(i));
		        count++;
		        if(count == n){
		            System.out.println(str.charAt(i));
		            return;
		        }
		    }
		}
		System.out.println("-1");
	}
}
