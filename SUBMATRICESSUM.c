/*print sum of elements of all sub matrices of sie m*n where r%m == 0 and c%n == 0

Input:
4 4
1 2 3 4
5 12 3 24
8 7 3 56
1 2 13 81
2 2

Output:
20 34 18 153

*/


#include<stdio.h>
#include <stdlib.h>

int main()
{
    int r,c,i,j,m,n,sum,dupi,dupj,p,q;
    scanf("%d %d\n",&r,&c);
    int a[r][c];
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            scanf("%d ",&a[i][j]);
        }
        scanf("\n");
    }
    scanf("%d %d",&m,&n);
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            if(i%m == 0 && j%n == 0){
                dupi = i;
                dupj = j;
                sum = 0;
                for(p=dupi;p<dupi+m;p++){
                    for(q=dupj;q<dupj+n;q++){
                        sum = sum + a[p][q];
                    }
                }
                j = j + (n - 1);
                printf("%d ",sum);
            }
        }
        i = i + (m - 1);
    }
}
