/*print count of common substring which are of atleast size n(given)

Input:
management
engage

Output:
4

Explanation:
the common substrins atlease of size n are ag,ge,age and en

*/

import java.util.*;
public class Hello {

    public static void main(String[] args) {
		//Your Code Here
		Scanner sc = new Scanner(System.in);
		String a = sc.nextLine();
		String b = sc.nextLine();
		int n = sc.nextInt();
		int count = 0, mainCount = 0, i, j, x = 0, y = 0;
		for(i=0;i<=a.length()-n;i++){
		    
		    for(j=0;j<=b.length()-n;j++){
		        
		        if(a.charAt(i) == b.charAt(j)){
		            
		            x = i;
		            y = j;
		            count = 0;
		            while((x<a.length()&&y<b.length())&&(a.charAt(x) == b.charAt(y))){
		                count++;
		                x++;
		                y++;
		                if(count >= n){
		                    mainCount++;
		                }
		            }
		        }
		    }		
		}
		System.out.println(mainCount);
	}
}
