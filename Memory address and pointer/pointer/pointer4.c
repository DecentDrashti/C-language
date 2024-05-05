#include<stdio.h>
void main(){
    int *a;
    int x=24,temp=0;
    a=&x;
    int *b;
    int y=36;
    b=&y;
   printf("before:%d %d",(*a),(*b));
   temp=*a;
   *a=*b;
   *b=temp;
   printf("after:%d %d",(*a),(*b));

}