#include<stdio.h>
#include<math.h>
void main(){
    int n,sum=0,temp,n1,r,i=0,po;
    printf("enter the number");
    scanf("%d",&n);
    temp=n;
    while(n>0){
        n=n/10;
        i++;
       
    }
    //printf("\n%d",n);
    //sum=r+n1;
    po=pow(10,(i-1));
    //printf("\n%d",i);
    n1=temp%10;//% ma remainder/ is for quotient
    printf("\n%d",n1);
    r=temp/po;
    printf("\n%d",r);
    sum=n1+r;
    printf("\n%d",sum);
}