#include<stdio.h>
#include<math.h>
void main(){
    int a,b,c;
    printf("enter the value of a");
    scanf("%d",&a);
    printf("\nenter the value of b");
    scanf("%d",&b);
    printf("\nenter the value of c");
    scanf("%d",&c);
    /*if(a>b){
        if(a>c){
            printf("a is largest");
        }else{
            printf("c is largest");
        }
    }else if(b>c){
        printf("b is largest");
    }else{
        printf("c is largest");
    }
    if(a>b>c){
       if((a*a)==(b*b)+(c*c)){
        printf("triangle is right angled");
         so on.. }or*/
         if(a==b&&b==c){
            printf("equilateral triangle");
         }else if(a==b||b==c||c==a){
            printf("isoceles triangle");
         }else if((a*a)+(b*b)==(c*c)||(a*a)==(b*b)+(c*c)||(a*a)+(c*c)==(b*b)){
         printf("right angled triangle");
           }else{
            printf("\nscalene triangle");
           }
}
