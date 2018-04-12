/*  The program must sort the integers present in odd positions if n is odd else it should sort in even position if n is even

Input:
7
12 45 14 21 57 12 9

Output:
9 45 12 21 14 12 57  

Input:
10
78 121 34 56 12 34 89 18 33 90

Output:
78 18 34 34 12 56 89 90 33 121  */

#include<stdio.h>
#include <stdlib.h>

int main()  {
    int n,i;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)  {
        scanf("%d",&a[i]);
    }
    if(n%2==0)  {
        sort(a,1,n);
    }
    else  {
        sort(a,0,n);
    }
    for(i=0;i<n;i++)  {
        printf("%d ",a[i]);
    }
}
void sort(int arr[],int start,int len)  {
    int i,j,t;
    for(i=start;i<len;i=i+2)  {
        for(j=i+2;j<len;j=j+2)  {
            if(arr[i]>arr[j])  {
                t=arr[i];
                arr[i]=arr[j];
                arr[j]=t;
            }
        }
    }
}
