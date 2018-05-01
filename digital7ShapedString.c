/* The program must print digital 7 shaped string int the pattern given below

Input:
xyz
Output:
x x x
y y x
z y x   */


#include<stdio.h>
#include <stdlib.h>

int main()
{
    char a[1000];
    int len,i,j,duplen;
    scanf("%s%n",a,&len);
    duplen=len;
    for(i=0;i<len;i++){
        for(j=0;j<duplen;j++){
            printf("%c ",a[i]);
        }
        for(j=i-1;j>=0;j--){
            printf("%c ",a[j]);
        }
        duplen--;
        printf("\n");
    }
}
