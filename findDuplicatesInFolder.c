/*find duplicates in folder.The directory structure of file system is given in n lines.Each line contain parent and child file .
If a folder has 2 file with same name then print it if no duplicates found print "-1" and the names should be in ascending order..
Input:
5
videos trailer.mp4
documents word.doc
documents animal.jpg
test trailer.mp4
documents word.doc

Output:
word.doc

Input:
7
src style.css
videos HD.mp4
documents sheet.xls
documents animal.jpg
test animal.jpg
documents sheet.xls
src.style.css

Output:
sheet.xls
style.css    */



#include<stdio.h>
#include <stdlib.h>
#include<string.h>
int main()
{
    int n,i,k=0,j,counter=0; 
    scanf("%d",&n);
    char first[100][100],last[100][100],result[100][100],temp[]="**",t[100],ans[100][100]; 
    for(i=0;i<n;i++) {
        scanf("%s %s",first[i],last[i]);
    }
    for(i=0;i<n;i++) {
        for(j=i+1;j<n;j++) {    
            if((strcmp(first[i],first[j])==0)&&(strcmp(last[i],last[j])==0)&&strcmp(last[j],temp)!=0)  {
                strcpy(result[k++],last[j]);    
                strcpy(last[j],temp); 
            }
        }
    }
    for(i=0;i<k;i++)  {
        for(j=i+1;j<k;j++)  {
            if(strcmp(result[i],result[j])==0) {
                strcpy(result[j],temp); 
            }
        }
        if(strcmp(result[i],temp)!=0) {
            strcpy(ans[counter++],result[i]);
        }
    }
    for(i=0;i<k;i++)  {
        for(j=i+1;j<k;j++) {
            if(strcmp(ans[i],ans[j])>0)  {
                strcpy(t,ans[i]);
                strcpy(ans[i],ans[j]); 
                strcpy(ans[j],t); 
            }
        }
    }
    if(k>0) {
        for(i=0;i<k;i++)  {
            printf("%s\n",ans[i]);
        }
    }
    else  {
        printf("-1");
    }
}
