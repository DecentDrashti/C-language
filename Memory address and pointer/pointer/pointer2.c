#include<stdio.h>
void main(){
    int *a;
    int x=4;
    a=&x;
    printf("%d",a);
    printf("\n%d",(*a));
     float *b;
    float y=4;
    b=&y;
    printf("\n%f",b);
    printf("\n%f",(*b));
     char *c;
    char z=4;
    c=&z;
    printf("\n%c",c);
    printf("\n%c",(*c));
     double *d;
    double p=4;
    d=&p;
    printf("\n%lf",d);
    printf("\n%lf",(*d));

}