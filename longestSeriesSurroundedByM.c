/* To print the longest series surrounded by m 

Input:
7 2
45 2 21 534 2 45 2
Output:
21 534

Input:
10 23
23 76 23 129 34 12 23 45 67 23
Output:
129 34 12      */


#include<stdio.h>
#include <stdlib.h>

int main()
{
    int n,m,i,j,count = 0 , mainCount = -1,start , end,dupi,flag = 0;
    scanf("%d %d\n",&n,&m);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d ",&a[i]);
    }
    for(i=0;i<n;i++){
        if(a[i] == m){
            dupi = i;
            while(a[i+1] != m && i+1<n){
                count++;
                i++;
            }
            if(i+1 == n){
                flag = 1;
            }
        }
        if(count >= mainCount && flag == 0){
            mainCount = count;
            start = dupi+1;
            end = i;
        }
        count = 0;
        flag = 0;
    }
    for(i=start;i<=end;i++){
        printf("%d ",a[i]);
    }

}
