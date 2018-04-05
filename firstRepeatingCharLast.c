/*The program must print first repeating char navigating from last in reverse order.If no repeating char is present print -1
Input:
manager
Output:
a
Input:
mnopq
Output:
-1   */

#include<stdio.h>
#include <stdlib.h>
#include<string.h>
int main()
{
    char s[1000];
    scanf("%s",s);
    int i,j;
    for(i=strlen(s)-1;i>=1;i--)
    {
        for(j=i-1;j>=0;j--)
        {
            if(s[i]==s[j])
            {
                printf("%c",s[i]);
                return;
            }
        }
    }
    printf("-1");
}
