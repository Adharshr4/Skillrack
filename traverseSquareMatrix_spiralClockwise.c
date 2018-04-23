/*program must traverse in the given spiral clockwise direction
Input:
2
1 2
3 4
Output:
1 2 4 3

Input:
4
1 2 3 4
5 6 7 8
9 10 11 12
13 14 15 16
Output:
1 2 3 4 8 12 16 15 14 13 9 5 6 7 11 10   */


#include<stdio.h>
#include <stdlib.h>
int main(){
    int n,i,j,k=1,first=0,m,dupn,last,count=0;
    scanf("%d",&n);
    dupn=n;
    last=n-1;
    int a[n][n];
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    while(count!=n*n){
        if(k==1){
            for(j=first;j<dupn;j++){
                printf("%d ",a[first][j]);  
                count++;
            }
            k=2;
        }
        else if(k==2){
            for(i=first+1;i<dupn;i++){
                printf("%d ",a[i][dupn-1]);
                count++;
            }
            k=3;
        }
        else if(k==3){
            for(j=dupn-2;j>=first;j--){
                printf("%d ",a[last][j]);
                count++;
            }
            k=4;
        }
        else if(k==4){
            for(i=dupn-2;i>=first+1;i--){
                printf("%d ",a[i][first]);
                count++;
            }
            k=1;
        }
        if(k==1){
            first++;
            dupn--;
            last--;
        }
    }
}
