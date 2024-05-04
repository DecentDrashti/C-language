#include<stdio.h>
void main(){
    int i,j,n=5;
    for (i=1;i<=5;i++){
         for(j=1;j<=i;j++){
            printf("%d",n);
            n--;
         }printf("\n");
         n=5; /*for(i=5;i>0;i--){
                          for(j=5;j>=i;j--){
                        printf("%d",j);*/
        }
    }
