/*to check if the given array is step sequnce or not
step sequence is adjacent elements should differ by one for all elements
Input:
2 4
Output:
no

Input:
1
2
Output:
yes

Input:
5
2 3 4 3 2
Output:
yes    */

#include<stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,j,count=1;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=1;i<n-1;i++){
        count=count+abs(a[i]-a[i-1])+abs(a[i]-a[i+1]);
    }
    if(count==((n-2)*2)+1  && abs(a[0]-a[1])==1 || n==1){     //not to give if inside loop we r calculation like this..see sample
    //input output. 
        printf("yes");
    }
    else{
        printf("no");
    }

}
