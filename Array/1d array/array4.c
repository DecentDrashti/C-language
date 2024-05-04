#include<stdio.h>
void main(){
    int mark[5],i,max,min,sum,avg;
    for(i=0;i<5;i++){
        printf("enter the array element");
        scanf("%d",&mark[i]);
   }
   max=mark[0];
   for(i=0;i<5;i++){
        if(max<mark[i]){
            max=mark[i];
        }
        }printf("\nmax=%d",max);
    min=mark[0];
for(i=0;i<5;i++){
        if(min>mark[i]){
            min=mark[i];
        }
        }printf("\nmin=%d",min);
      sum=0;
for(i=0;i<5;i++){
            sum=sum+mark[i];
        }printf("\nsum=%d",sum);
        for(i=0;i<5;i++){
            avg=sum/5;
    
        }printf("\navg=%d",avg);
}
