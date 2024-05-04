#include<stdio.h>
void main(){
    int n,i=1;
    printf("enter the decimal number");
    scanf("%d",&n);
    while(n!=0){
        if(n>1000){
            printf("m");
            n=n-1000;
        }else if(n>900){
            printf("cm");
            n=n-900;//so on
        }
    }
}