#include<stdio.h>
void main(){
int x,y,i=1,ans=1;
printf("enter the value of x");
scanf("%d",&x);
printf("enter the value of exponents y");
scanf("%d",&y);
while(i<=y){
    ans=ans*x;
    i++;
}
printf("x^y=%d",ans);
}