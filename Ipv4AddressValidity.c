/* To check given address is valid or not.it should have 4 blocks separated by dot and it should be in range 0 to 255
Input:
127.0.0.1
Output:
Valid

Input:
2.1
output:
Invalid  */

#include<stdio.h>
#include <stdlib.h>

int main()
{
    int i,a[50],k=0,count=0,flag=0;
    while(scanf("%d.",&a[k++])>0)
    {
        
    }
    for(i=0;i<k-1;i++)
    {
        if(a[i]>=0&&a[i]<=255)
        {
            count++;
        }
        else
        {
            flag=1;
        }
    }
    if(count==4&&flag==0)
    {
        printf("Valid");
    }
    else
    {
        printf("Invalid");
    }
}
