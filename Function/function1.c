#include<stdio.h>
void add(int, int);//fun.declares ani jagya e func def sidhu lakhye to chale
void main(){
    int a=5,b=6;
    add(a,b);//func call
}
void add(int x,int y){ //fun def
    printf("addition is=%d",x+y);
}