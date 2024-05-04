#include<stdio.h>
void main(){
    float u, amount,total;
    printf("enter the unit:");
    scanf("%f",&u);
    if(0<=u && u<=50){
        amount=u*0.50;
         printf("%f",amount);
    }else if(50<u && u<=150){
        amount=(50*0.5)+(u-50)*0.75;
        printf("%f",amount);
      }else if(150<u && u<=250){
        amount=(50*0.5)+(100*0.75)+(u-150)*1.20;
        printf("%f",amount);
        }else {
        amount=(50*0.5)+(100*0.75)+(100*1.2)+(u-250)*1.50;
        printf("%f",amount);
          }

        total=amount+(amount*20)/100;
        printf("\nTotal bill=%f",total);
        }
