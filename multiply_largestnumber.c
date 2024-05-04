#include<stdio.h>
void main(){
    int a,b,c,d=0,r=0;
    //7b1 it dont have using switch
    printf("enter the three numbers");
    scanf("%d %d %d",&a,&b,&c);
    d=(a>b)?((a>c)?a:c):((b>c)?b:c);
    printf("%d",d);
    r=(a>b)?((b>c)?c:b):((a>c)?c:a);
    printf("\n%d",r);
    printf("\n%d",d*r);
 }