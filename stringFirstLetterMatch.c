/* String first letter matching
Input:
windows
5
wolf
word
whale
dove
apple

Output:
wolf
i
n
dove
o
word
s  */

#include<stdio.h>
#include <stdlib.h>
#include<string.h>
int main()
{
    char s[100],strval[100][100];
    int n,i,j,strco;
    scanf("%s\n%d",s,&n);
    for(i=0;i<n;i++)
    {
        scanf("%s",strval[i]);
    }
    for(i=0;i<strlen(s);i++)
    {
        printf("%c",s[i]);
        for(j=0;j<n;j++)
        {
            if(s[i]==strval[j][0])
            {
                for(strco=1;strco<strlen(strval[j]);strco++)
                {
                    printf("%c",strval[j][strco]);
                }
                strval[j][0]='*';
                break;
            }
        }
        printf("\n");
    }
}
