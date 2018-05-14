/*2 strings are passed .print the string with most no of vowels .if no of vowels is same print the longest string 

Input:
adder divider
Output:
divider

Input:
important welcome
Output:
important        */


import java.util.*;
public class Hello {

    public static void main(String[] args) {
		//Your Code Here
	Scanner sc = new Scanner(System.in);
	String[] str = sc.nextLine().trim().split(" ");
	String ans="";
	if(str[0].length() > str[1].length()){
	    ans=str[0];
	}
	else{
	    ans=str[1];
	}
	int i,j,count1=0,count2=0;
        for(i=0;i<str[0].length();i++){
            if( str[0].charAt(i) == 'a' || str[0].charAt(i) == 'e' || str[0].charAt(i) == 'i' || str[0].charAt(i) == 'o' || str[0].charAt(i) == 'u' ){
                count1++;
            }
        }
        for(i=0;i<str[1].length();i++){
            if( str[1].charAt(i) =='a' || str[1].charAt(i)=='e' || str[1].charAt(i) == 'i' || str[1].charAt(i) =='o' || str[1].charAt(i) == 'u' ) {
                count2++;
            }
        }
        if(count1>count2){
            System.out.println(str[0]);
        }
        else if(count2>count1){
            System.out.println(str[1]);    
        }
        else{
            System.out.println(ans);
        }
    }
}
