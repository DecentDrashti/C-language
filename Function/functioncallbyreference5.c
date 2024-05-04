#include<stdio.h>
void swap(int x,int y){
    int *a;
    int temp=0;
    a=&x;
    int *b;
    
    b=&y;
   printf("before:%d %d",(*a),(*b));
   temp=*a;
   *a=*b;
   *b=temp;
   printf("after:%d %d",(*a),(*b));

}
void main(){
    int x,y;
    printf("value of x");
    scanf("%d",&x);
    printf("value of y");
    scanf("%d",&y);

    swap(x,y);
}