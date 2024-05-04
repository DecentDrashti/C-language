#include<stdio.h>
void main(){
    int mark[5],i,even=0,odd=0;
    for(i=0;i<5;i++){
        printf("enter the array element");
        scanf("%d",&mark[i]);
   }
   for(i=0;i<5;i++){
        if(mark[i]%2==0){
            even++;
        }else{
            odd++;
        }
   }printf("\n%d %d",even,odd);
}