#include<stdio.h>
void main(){
    int a,b,i;
    printf("enter the number");//code is to print between two given number and divisible by 2
    scanf("%d",&a);
    printf("enter the number");
    scanf("%d",&b);
    i=a;
    while((a<=i)&&(i<=b)){
        if(i%2==0){
        printf("\n%d",i);
        }
        i=i+1;
  }
}