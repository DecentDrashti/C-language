#include<stdio.h>
#include<math.h>
void main(){
    float a,b,c,d,r1,r2;
    printf("enter the value of a");
    scanf("%f",&a);
    printf("enter the value of b");
    scanf("%f",&b);
    printf("enter the value of c");
    scanf("%f",&c);
    d=((b*b)-(4*a*c));
    printf("d=%.2f",d);
    if(a!=0){
        if(d==0){
            printf("\nequal and real roots exists");
            r1=r2=(-b)/(2.0*a);
            printf("r1=%f,r2=%f",r1,r2);
        }
        if(d>0){
        printf("\ndistinct and real roots exits");
         r1=(-b+sqrt(d))/(2.0*a);
         r2=(-b-sqrt(d))/(2.0*a);
         printf("\nr1=%f,r2=%f",r1,r2);
        }
      }else if(a==0){
        printf("\nno real roots exits thus value is improper");
      }
    }