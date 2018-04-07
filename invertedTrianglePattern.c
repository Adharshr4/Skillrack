/*Input:
4
Output:
1*2*3*4
*7*6*5*
**8*9**
***10***

Input:
5
Output:
1*2*3*4*5
*9*8*7*6*
**10*11*12**
***14*13***
****15****   */


#include<stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,j,dupk1,secondPart,k=1,dupk,k1,mul=2;
    scanf("%d",&n);
    secondPart=n-1;
    for(i=0;i<n;i++)
    {
        for(j=0;j<i;j++)
        {
            printf("*");
        }
        if(i%2==0)
        {
            for(j=0;j<secondPart;j++)
            {
                printf("%d*",k++);
            }
            printf("%d",k);
            dupk=k;
        }
        else
        {
            k1=dupk+(secondPart)+1;
            for(j=0;j<secondPart;j++)
            {
                printf("%d*",k1--);
                k++;
            }
            printf("%d",k1);
            k=k+2;
        }
        for(j=0;j<i;j++)
        {
            printf("*");
        }
        printf("\n");
        secondPart--;
    }
}
