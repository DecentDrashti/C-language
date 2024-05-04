#include<stdio.h>
void main(){
    int i=1,sum=0,n;
    printf("enter the number");
    scanf("%d",&n);
    while(i<=n){
         if((n%i)==0){
            sum=sum+1;
         
           }i=i+1;
         }
         if(i==2){
          printf("prime");
         }else{
            printf("not prime");
         }
     }