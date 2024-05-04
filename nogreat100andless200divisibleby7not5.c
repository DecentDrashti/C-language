#include<stdio.h>
void main(){
    int a=100,b=200,i=101;
    while((a<i)&&(i<=b)){
        if((i%7==0)&&(i%5!=0)){
        printf("\n%d",i);
        }
        i=i+1;
}
}