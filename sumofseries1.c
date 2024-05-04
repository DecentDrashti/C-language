#include<stdio.h>
void main(){
    int i=1,sum=0,n,n1=0;
    printf("enter the number");
    scanf("%d",&n);
    while(n1!=(n*n)){
        n1=n1+i;
        sum=sum+n1;
        i=i+2;
         printf("\t%d",n1);
    }
    printf("\n%d",sum);
}