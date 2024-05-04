#include<stdio.h>
void main(){
    int *a;
    int x=24;
    a=&x;
    printf("%d",a);
    printf("\n%d",(*a));
}