/* given a string the progrm must reverse the characs present at odd pos 

Input:
barocde
Output:
eaocrdb

Input:
Mediterranean
Output:
neeiaerrtndaM   */


#include<stdio.h>
#include <stdlib.h>
int main(){
    char a[100],b[100],result[100];
    int i,j,len,last,rescount=0;
    scanf("%s%n",a,&len);
    last=(strlen(a)%2) ? len-1 : len-2 ;     
    strcpy(b,a);
/*    for(i=0;i<len;i++) {     // To jst print the characters for getting output
        if(i%2==0) {
            printf("%c",b[last]);
            last=last-2;    
        }
        else {
            printf("%c",a[i]); 
        }
    }  */
    for(i=0;i<len;i++) {     //To build it as a string and then printing the string 
        if(i%2==0) {
            result[rescount++]=b[last];
            last=last-2;
        }
        else {
            result[rescount++]=a[i];
        }
    }
    printf("%s",result);
}
