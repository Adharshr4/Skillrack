/* to print the reversed alphabet position 
Input:
abc
Output:
zyx

Input:
Yarn
Output:
Bzim   */


#include<stdio.h>
#include <stdlib.h>

int main()
{
    char a[1001];
    int i;
    scanf("%s",a);
    for(i=0;i<strlen(a);i++){
        if(a[i]>=97 && a[i]<=122){
            printf("%c",(122-a[i])+97);
        }
        else{
            printf("%c",(90-a[i])+65);
        }
    }
}
