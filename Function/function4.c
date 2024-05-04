#include<stdio.h>
void max(float x,float y,float z){
    if(x>y){
        if(y>z){
            printf("maximum=%f",x);
        }else if(x>z){
               printf("maximum=%f",x);
        }else{
            printf("maximum=%f",z);
        }
    }else if(y>z){
            printf("maximum=%f",y);
    }
        
}

void main(){
    float x,y,z;
    printf("value of x");
    scanf("%f",&x);
    printf("value of y");
    scanf("%f",&y);
    printf("value of z");
    scanf("%f",&z);
    max(x,y,z);
}
