#include<stdio.h>
void main(){
    int *a;
    int x=24,sum=0;
    a=&x;
    int *b;
    int y=36;
    b=&y;
    sum=(*a)+(*b);
    printf("%d",sum);
}
