#include<stdio.h>
void swap(int x,int y){
    int temp;
    temp=x;
    x=y;
    y=temp;
    printf("after(x,y)=%d %d",x,y);
}
void main(){
    int x,y;
    printf("value of x");
    scanf("%d",&x);
    printf("value of y");
    scanf("%d",&y);
    swap(x,y);
    
}