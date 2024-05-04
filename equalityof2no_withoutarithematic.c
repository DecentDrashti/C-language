#include<stdio.h>
void main(){
    int a,b;
    printf("enter the number");
    scanf("%d %d",&a,&b);
    ((a^b)==0)?printf("a and b is equal"):printf("both are not equal");
    }