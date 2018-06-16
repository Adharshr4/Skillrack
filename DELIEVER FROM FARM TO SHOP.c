#include<stdio.h>
#include <stdlib.h>
int main(){     
    int n,i,j,farmcount = 0 , distanceArray[10] , count = 0 , flag = 0 , k =0,dupj,howmanystartcount = 0,loop,secondflag = 0;
    int summaCount = 0 , arr[100] = {0} , p , pos,maindistanceArray[10];       
    scanf("%d\n",&n); 
    char a[n][1001] , b[n][1001] , farm[1001] ,ansArray[10][1001] , temp[1001],mainans[10][1001]; 
    for(i=0;i<n;i++){ 
        scanf("%s %s\n",a[i],b[i]); 
    }
    strcpy(farm , a[0]);
    for(i=0;i<n;i++){
        flag = 0; 
        count = 0; 
        for(j=0;j<n;j++){ 
            if(strcmp(b[i] , a[j]) == 0){
                flag = 1;  
            }
        }
        if(flag == 0){ 
            strcpy(temp , a[i]);
            while(1){   
                for(p=0;p<n;p++){  
                    if(strcmp(temp , b[p]) == 0){  
                        strcpy(temp , a[p]);    
                        count++;    
                        break;  
                    }
                }
                if(strcmp(temp , a[0]) == 0 ){  
                    strcpy(ansArray[k],b[i]); 
                    distanceArray[k++] = count;
                    count = 0;      
                    break;  
                }
            }
        }
    }
    for(i=0;i<k;i++){ 
        for(j=i+1;j<k;j++){ 
            if(distanceArray[i] > distanceArray[j]){            
                int t = distanceArray[i]; 
                distanceArray[i] = distanceArray[j];
                distanceArray[j] = t;
                strcpy(temp , ansArray[i]);         
                strcpy(ansArray[i] , ansArray[j]);
                strcpy(ansArray[j] , temp); 
            }
        }
    }
    for(i=0;i<k;i++){
        for(j=i+1;j<k;j++){
            if(strcmp(ansArray[i] , ansArray[j]) == 0){     
                strcpy(ansArray[j] , "$$");     
                distanceArray[j] = -10;
            }
        }
    }
    int k1 = 0;  
    for(i=0;i<k;i++){
        if(strcmp(ansArray[i] , "$$") != 0 && distanceArray[i] != -10){     
            strcpy(mainans[k1] , ansArray[i]);
            maindistanceArray[k1++] = distanceArray[i]; 
        }
    }
    for(i=0;i<k1;i++){
        printf("%s ",mainans[i],maindistanceArray[i]);  
    }
}
