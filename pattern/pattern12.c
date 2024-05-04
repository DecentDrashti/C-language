#include<stdio.h>
void main(){
    int i,j,k=1;
    char character='A';
    for(i=1;i<=5;i++){
        for(j=1;j<=i;j++){
            if(i%2==0){
                printf(" %c",character);
                character++;
            }else{
                printf(" %d",k);
                k++;
            }
         }printf("\n");
    }
}