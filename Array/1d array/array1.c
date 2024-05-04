#include<stdio.h>
void main(){
    /*int n;
    printf("enter the value");
    scanf("%d",&n);*/
    int mark[5],i;
    for(i=0;i<5;i++){
        printf("enter the array element");
        scanf("%d",&mark[i]);
    }
    for(i=0;i<5;i++){
        printf("\nmark[%d]=%d ",i,mark[i]);
    }
    for(i=4;i>=0;i--){
        printf("\n\nmark[%d]=%d ",i,mark[i]);
    }

}