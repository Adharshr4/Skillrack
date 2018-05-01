/* The program must print unique characters in 2 strings

Input:
owl pow
Output:
4   */

import java.util.*;
public class Hello {

    public static void main(String[] args) {
		//Your Code Here
		Scanner sc = new Scanner(System.in);
		String[] a=sc.nextLine().trim().split(" ");
		Set<Character> s=new HashSet<>();
		for(Character c:a[0].toCharArray()){
		    s.add(c);
		}
		for(Character c:a[1].toCharArray()){
		    s.add(c);
		}
        System.out.println(s.size());
	}
}
