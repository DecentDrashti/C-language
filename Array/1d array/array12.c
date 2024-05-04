#include<stdio.h>
void main(){
    int mark[5],i,nonnegative=0,neg=0;
    for(i=0;i<5;i++){
        printf("enter the array element");
        scanf("%d",&mark[i]);
   }
   for(i=0;i<5;i++){
        if(mark[i]>=0){
           nonnegative++;
        }else{
            neg++;
        }
   }printf("\nnonnegative=%d negative=%d",nonnegative,neg);
}