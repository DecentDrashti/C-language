#include<stdio.h>
void max(int x,int y){
    if(x>y){
        printf("max=%d",x);
        printf("min=%d",y);
    }else{
        printf("max=%d",y);
        printf("min=%d",x);
    }
}
void main(){
    int a,b;
    printf("value of a");
    scanf("%d",&a);
    printf("value of b");
    scanf("%d",&b);

    max(a,b);
}