/* print lower triangular matrix
Input:
3
1 2 3
4 5 6
7 8 9

Output:
1
4 5
7 8 9  */

#include<stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,j;
    scanf("%d",&n);
    int a[n][n];
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i>=j)
            {
                printf("%d ",a[i][j]);
            }
            else
            {
                break;
            }
        }
        printf("\n");
    }
}
