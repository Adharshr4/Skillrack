/* print the count of the pair of adjacent characters,the right char is next to left char in original alphabet se.

Input:
abcdef
Ouput:
5

Explanation:
ab bc cd de ef are the 5 instances    */


#include<stdio.h>
#include <stdlib.h>

int main()
{
    char a[1001];
    int i,j,l,c=0;
    scanf("%s%n",a,&l);
    for(i=0;i<l-1;i++){
        if(a[i+1]-a[i] == 1){
            c++;
        }
    }
    printf("%d",c);
}
