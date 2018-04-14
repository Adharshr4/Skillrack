/*  the program must  print "yes" if all elements in the left diagonal are in right diagonal and print "no" if its not
Input:
3
12 34 56
78 90 29
12 68 56
Output:
yes

Input:
4
1 2 3 4
5 6 7 8
11 22 33 44
55 66 77 88
Output:
no   */



#include<stdio.h>
#include <stdlib.h>

int main(){
    int i,j,n,k=0,k1=0,last,leftDia[1000],rightDia[1000],count=0;
    scanf("%d",&n);
    last=n-1;
    int a[1000][1000];
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(i==j){
                leftDia[k++]=a[i][j];
            }
            if(j==last){
                rightDia[k1++]=a[i][j];
            }
        }
        last--;
    }
    for(i=0;i<k;i++){
        for(j=0;j<k1;j++){
            if(leftDia[i]==rightDia[j]&& rightDia[j]>0){
                count++;
                rightDia[j]=-1;
                break;
            }
        }
    }
    if(count==k){
        printf("yes");
    }
    else{
        printf("no");
    }
}
