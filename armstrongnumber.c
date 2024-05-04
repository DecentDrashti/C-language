#include<stdio.h>
#include<math.h>
void main(){
    //armstrong number=let a number =234 then 2^3+3^3+4^3=234 raised to is a no of digits
    int n,i=0,temp,r,n1,sum=0,p;
    printf("enter the number");
    scanf("%d",&n);
    temp=n;
    p=n;
    while(n!=0){
        n=n/10;

        i++;
    }
    printf("\n%d",i);
    while(temp!=0){
        n1=temp%10;
        r=pow(n1,i);
        sum=sum+r;
        temp=temp/10;
        }
        printf("\n%d",r);
        printf("\n%d",sum);
        if(sum==p){
            printf("\narmstrong");
        }else{
            printf("\nnot armstrong number");
        }

}