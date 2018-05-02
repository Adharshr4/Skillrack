/*  To check column palindrome .if atleast one column palindrome is present in the matrix print "yes" else "no"

Input:
3
1 2 3
4 5 6
7 8 9
Output:
no

Input:
4
1 2 3 4
5 6 7 8
11 6 34 45
2 2 2 2
Output:
yes    */


#include<stdio.h>
#include <stdlib.h>
int main(){  
    int i,j,n,last,flag=0,count=0,loop;
    scanf("%d ",&n);    
    int a[n][n];    
    loop=n/2;
    if(n%2==1){     
        loop=(n/2)+1;
    }
    last=n-1;  
    for(i=0;i<n;i++){ 
        for(j=0;j<n;j++){ 
            scanf("%d",&a[i][j]); 
        }
    }
    for(j=0;j<n;j++){
        for(i=0;i<loop;i++){            
            if(a[i][j]!=a[last--][j]){ 
                flag=1; 
            }
        }
        if(flag==0){
            count++;    
        }
        last=n-1; 
        flag=0;   
    }
    if(count>=1){ 
        printf("yes");
    }
    else{
        printf("no");
    }
}
