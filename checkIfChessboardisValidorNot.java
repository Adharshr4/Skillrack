/* A chessboard of size n*n is given as input : check if it is valid or not .
it is valid if it has alternate black and white squares both vertically and horizantly 

Input:
4
WBWB
BWBW
WBWB
BWBW

Output:
Valid

Input:
4
WBWB
BWBW
WBWB
BWBB

Output:
Invalid            */

import java.util.*;
public class Hello {

    public static void main(String[] args) {
		//Your Code Here
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt(),i = 0,j = 0,flag = 0;
		sc.nextLine();
		char[][] arr = new char[n+1][n+1];
		for(i=0;i<n;i++){
		    String str = sc.next().trim();
		    for(j=0;j<n;j++){
		        arr[i][j] = str.charAt(j);
		    }
		}
		for(j=1;j<n;j++){
		    if(arr[0][j] == arr[0][j-1]){
		        flag = 1;
		        System.out.println("Invalid");
		        return;
		    }
		}
		for(i=1;i<n;i++){
		    for(j=1;j<n;j++){
		       if((arr[i][j] == arr[i][j-1]) || (arr[i][j] == arr[i-1][j])){
		           flag = 1;
		           System.out.println("Invalid");
		           return;
		       }
		    }
		}
		for(j=1;j<n;j++){
		    if(arr[n-1][j] == arr[n-1][j-1]){
		        flag = 1;
		        System.out.println("Invalid");
		        return;
		    }
		}
		System.out.println("Valid");
	}
}
