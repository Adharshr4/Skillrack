/*T print the pattern as in example input output
Input:
4
Ouput:
---1
--3-2
-4-5-6
10-9-8-7

Input:
5
Output:
----1
---3-2
--4-5-6
-10-9-8-7
11-12-13-14-15    */


#include<stdio.h>
#include <stdlib.h>
int main() {
    int n,i,j,k=1,k1=3,addK=1,dupk1,addK1=1;
    scanf("%d",&n); 
    int first=n-1;
    for(i=0;i<n;i++) { 
        for(j=0;j<first;j++) { 
            printf("-");
        }
        if(i%2==0) {
            for(j=0;j<i;j++) {
                printf("%d-",k++);
            }
            printf("%d",k);
            addK=addK+2; //k value is incremented by 3,5,7,9 fashion so this line is helpful to find that 
            k=k+addK; //to assign the k value
        }
        else {
            dupk1=k1;
            for(j=0;j<i;j++) {
                printf("%d-",k1--);
            }
            printf("%d",k1);
            addK1=addK1+2; 
            k1=addK1+(addK1+1)+dupk1;
        }
        printf("\n");
        first--; 
    }        
}
