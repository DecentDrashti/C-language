#include<stdio.h>
void simpleinterest(float x,float y,float z){
    printf("%f",(x*y*z)/100);
}
void main(){
    float p,r,t;
    printf("value of p");
    scanf("%f",&p);
    printf("value of r");
    scanf("%f",&r);
    printf("value of t");
    scanf("%f",&t);
    simpleinterest(p,r,t);
}