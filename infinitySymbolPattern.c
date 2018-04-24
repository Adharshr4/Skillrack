/* the program must print the pattern as below

Input:
3
1 2 3
5 6 7
2 3 4
Output:
1 6 4 7 3 6 2 5 1

Input:
4
1 2 3 4
5 6 7 8
9 10 11 12
13 14 15 16  
Output:
1 6 11 16 12 8 4 7 10 13 9 5 1   */


#include<stdio.h>
#include <stdlib.h>
int main(){
    int n,i,j,count=0,first=0,last,middle,check;
    scanf("%d",&n);
    last=n-1;
    middle=n-2;
    check=n+(n-1)+(n-1)+(n-1);
    int a[n][n];
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    while(count!=check){
        for(i=0;i<n;i++){
            printf("%d ",a[i][i]);
            count++;
        }
        for(i=last-1;i>=0;i--){
            printf("%d ",a[i][last]);
            count++;
        }
        for(i=1;i<n;i++){
            printf("%d ",a[i][middle]);
            middle--;
            count++;
        }
        for(i=last-1;i>=0;i--){
            printf("%d ",a[i][first]);
            count++;
        }
    }
}
