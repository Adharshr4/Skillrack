/* The program must print value if first and last digit are odd 
Input:
4
11 21 41 33
Output:
11 33   */


#include<stdio.h>
#include <stdlib.h> 
int main() {
    int n,i,first,last,dupai;
    scanf("%d",&n); 
    int a[n];
    for(i=0;i<n;i++) { 
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++) {
        last=a[i]%10;
        dupai=a[i]; // To keep the array without changing main array value
        while(dupai>0) {
            first=dupai%10; 
            dupai=dupai/10;
        }
        if(last%2==1 && first%2==1) { 
            printf("%d ",a[i]);
        }
    }
}
