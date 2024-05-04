#include<stdio.h>
void main(){
    int a,b,c;
    printf("enter the 3 numbers");
    scanf("%d %d %d",&a,&b,&c);
    if(a>b && a>c){
       if(b>c){
            printf("b is 2nd largest");
          }else{
          printf("c is 2nd largest");
           }}else if(b>a && b>c){
             if(a>c){
                  printf("a is 2nd largest");
            }else{
                  printf("c is 2nd largest");
            }
               }else{
            if(a>b){
                  printf("2nd largest is a");
            }else{
                  printf("2nd largest is b");
            }
           }
}