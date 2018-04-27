/* The program must print longest substring without vowels if no substring is present print -1 if more than two with same 
length print the first one .
Input:
awkxqdtpetsqwjh
Output:
wkxqdtp

Input:
aeiou
Output:
-1   */

#include<stdio.h>
#include <stdlib.h>

int main()
{
    char a[100],vow[]="aeiou",output[100];
    int i,j,len,max=-1,duplen,k=0,start,end,m,flag=0;
    scanf("%s%n",a,&len);
    for(m=0;m<strlen(a);m++)
    {
        duplen=len;
        for(i=m;i<len;i++)
        {
            for(j=m;j<duplen;j++)
            {
                if(a[j]=='a'||a[j]=='e'||a[j]=='i'||a[j]=='o'||a[j]=='u')
                {
                    flag=1;
                }   
            }
            if(flag==0 && duplen-m-1>max)
            {
                max=duplen-m-1;
                start=m;
                end=duplen;
            }
            flag=0;
            duplen--;
        }
    }
    for(i=start;i<end;i++)
    {
        printf("%c",a[i]);
    }
    if(max==-1)
    {
        printf("-1");
    }
}
