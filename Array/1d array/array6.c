#include<stdio.h>
void main(){
    int i,n=5,sum=0,avg,count=0;
    int mark[5];
    for(i=0;i<5;i++){
        printf("enter the array element");
        scanf("%d",&mark[i]);
   }
    for(i=0;i<n;i++){
           sum=sum+mark[i];
            }//printf("\nsum=%d",sum);
        for(i=0;i<n;i++){
            avg=sum/5;
    
        }printf("\navg=%d",avg);
        for(i=0;i<n;i++){
        if(mark[i]>avg){
            count++;
        } 
        }printf("\ncount=%d",count);
    }