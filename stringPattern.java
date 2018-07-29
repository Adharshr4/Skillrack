/*print as the format given below by accepting three strings

BRIDGE DRAGON TRANCE 
Output:
B++++T
R++++R
I++++A
DRAGON
G++++C
E++++E

Input:
onions
monkey
assami

Output:
m++++a
onions
n++++s
k++++a
e++++m
y++++i     */

import java.util.*;
public class Hello {
    
    public static int check(String s1,String s2,String s3){
        int pos = s1.indexOf(s2.charAt(0));
        if(pos != -1){
            int dupPos = s3.indexOf(s2.charAt(s2.length()-1) , 1);       // if first string itself has the letter but in second index of particulat character
            if(pos == dupPos){
                return 1;
            }
        }
        pos = s1.indexOf(s3.charAt(0));
        if(pos != -1){
            int dupPos = s2.indexOf(s3.charAt(s3.length()-1) , 1);
            if(pos == dupPos){
                return 2;
            }
        }
        return 0;
    }
    
    public static void main(String[] args) {
		//Your Code Here
		Scanner sc = new Scanner(System.in);
		int flag = 0;
		String[] str = new String[4];
		String[] s = sc.nextLine().split(" ");
		if(s.length < 2){
		    str[0] = s[0];
		    str[1] = sc.nextLine();
		    str[2] = sc.nextLine();
		}
		else{
		    str[0] = s[0];
		    str[1] = s[1];
		    str[2] = s[2];
		}
		String first = "" , second = "" , third = "";
		int val = check(str[0] , str[1] , str[2]);
		if(val == 1){
		    first = str[0];  second = str[1];  third = str[2];
		    flag = 1;
		}
		else if(val == 2 && flag == 0){
		    first = str[0];  second = str[2];  third = str[1];
		    flag = 1;
		}
		val = check(str[1] , str[0] , str[2]);
		if(val == 1 && flag == 0){
		    first = str[1];  second = str[0];  third = str[2];
		    flag = 1;
		}
		else if(val == 2 && flag == 0){
		    first = str[1];  second = str[2];  third = str[0];
		    flag = 1;
		}
		val = check(str[2] , str[1] , str[0]);
		if(val == 1 && flag == 0){
		    first = str[2];  second = str[1];  third = str[0];
		    flag = 1;
		}
		else if(val == 2){
		    first = str[2];  second = str[0];  third = str[1];
		}
		for(int i=0;i<first.length();i++){
		    for(int j=0;j<second.length();j++){
		        if(j == 0){
		            if(first.charAt(i) == second.charAt(0)){
		                for(int k=0;k<second.length();k++){
		                    System.out.print(second.charAt(k));
		                }
		                j = second.length();
		            }
		            else{
		                System.out.print(first.charAt(i));
		            }
		        }
		        else if(j == second.length()-1){
		            System.out.print(third.charAt(i));
		        }
		        else{
		            System.out.print("+");
		        }
		    }
		    System.out.println();
		}
	}
}
