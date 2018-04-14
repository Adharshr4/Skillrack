/* Print as in the example Input and Output
Input:
trophy
panther

Output:
trophy
---a--
---n--
---t--
---h--
---e--
---r--

Input:
morning
ninja

Output:
morning
-----i-
-----n-
-----j-
-----a-   */


#include<stdio.h>
#include <stdlib.h>

int main()
{
    char s1[100],s2[100];
    int i,j,l1,l2,pos;
    scanf("%s%s",s1,s2);
    l1=strlen(s1);
    l2=strlen(s2);
    printf("%s\n",s1);
    for(i=0;i<l1;i++){
        if(s1[i]==s2[0]){
            pos=i;
        }
    }
    for(i=1;i<l2;i++){
        for(j=0;j<l1;j++){
            if(j==pos){
                printf("%c",s2[i]);
            }
            else{
                printf("-");
            }
        }
        printf("\n");
    }
}
