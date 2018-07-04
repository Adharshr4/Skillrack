/*evaluate the given simple expression

Input:
2^2+3*4-2

Output:
26

Input 2:
4+23-100

Output:
-73           */


import java.util.*;
import java.math.BigInteger;
import java.util.regex.Matcher;
import java.util.regex.Pattern;
public class Hello {

    public static void main(String[] args) {
		//Your Code Here
		Scanner sc = new Scanner(System.in);
		String str = sc.nextLine();
		int i = 1 , a = 0 ;
		long  ans = 0;
		List<String> list = new ArrayList<String>();
		Matcher m = Pattern.compile("[0-9]+|[+-^/*]").matcher(str);
		while(m.find()){
		    list.add(m.group());
		}
		ans = Integer.parseInt(list.get(0));
		while(i < list.size()){
		    if(list.get(i).charAt(0) == '+'){
		        ans = ans + Long.parseLong(list.get(i+1));
		    }
		    else if(list.get(i).charAt(0) == '-'){
		       ans = ans - Long.parseLong(list.get(i+1));
		    }
		    else if(list.get(i).charAt(0) == '*'){
		        ans = ans * Long.parseLong(list.get(i+1));
		    }
		    else if(list.get(i).charAt(0) == '/'){
		     ans = ans / Long.parseLong(list.get(i+1));  
		    }
		    else{
		        ans = (long)Math.pow(ans , Long.parseLong(list.get(i+1)));
		    }
		    i = i + 2;
		}
		System.out.println(ans);
	}
}
