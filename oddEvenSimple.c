/* Program to print odd and even digits in a numbers in reverse order
Input:
7653
Output:
6
357

Input:
21
Output:
2
1   */

#include<stdio.h>
#include <stdlib.h>

int main()
{
    unsigned long long int n;
    scanf("%llu",&n);
    printNum(n,0);   //for even 
    printf("\n");
    printNum(n,1);    //for odd
}
void printNum(unsigned long long int num,int rem)
{
    while(num>0)
    {
        if(num%2==rem)
        {
            printf("%d",num%10);
        }
        num=num/10;
    }
}
