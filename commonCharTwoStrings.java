/*  print count of common characters in 2 strings
Input:
hello velocity
Output:
3

Input:
apple pepper
Output:
3   */


import java.util.*;
public class Hello {

    public static void main(String[] args) {
        //Your Code Here
		Scanner sc = new Scanner(System.in);
		int count=0;
		String[] a = sc.nextLine().trim().split(" ");
		List<Character> l1 = new ArrayList<>();
        List<Character> l2 = new ArrayList<>();
        for(Character c : a[0].toCharArray()){
            l1.add(c);
        }
        for(Character c : a[1].toCharArray()){
            l2.add(c);
        }
        for(Character c : l1){
            if(l2.contains(c)){
                l2.remove(c);
                count+=1;
            }
        }
        System.out.println(count);
	}
}
