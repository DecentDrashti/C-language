#include<stdio.h>
void main(){
    int n,i=1,sum;
    printf("enter the number");
    scanf("%d",&n);
    while(i<=n){
    sum=sum+i;
        i=i+1;
}
printf("sum of given number=%d",sum);
}