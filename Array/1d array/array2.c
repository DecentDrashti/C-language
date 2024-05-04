#include<stdio.h>
void main(){
    int mark[5],i,pos=0,zero=0,neg=0;
    for(i=0;i<5;i++){
        printf("enter the array element");
        scanf("%d",&mark[i]);
   }
   for(i=0;i<5;i++){
        if(mark[i]>=0){
            if(mark[i]>0){
                pos++;
            }else{
                zero++;
            }
        }else{
            neg++;
        }
   }printf("\n%d %d %d",pos,zero,neg);
}