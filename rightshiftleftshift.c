#include<stdio.h>
void main(){
    /*a<<b=a*2^b and a>>b=a/2^b*/
    int a=5,b;
    a=a<<2;
    b=a>>2;
    printf("%d %d",a,b);
}