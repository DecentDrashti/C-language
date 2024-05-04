#include<stdio.h>
void main(){
    int n,i,count=0;
    printf("enter the size of array");
    scanf("%d",&n);
    int mark[n];
    for(i=0;i<n;i++){
        printf("enter the array element");
        scanf("%d",&mark[i]);
   }
   for(i=0;i<n;i++){
        if(mark[i]%3==0){
           count++;
        }else{
            printf("\nmark[%d]=%d=no",i,mark[i]);
        }
   }printf("\nnumber divisible by 3=%d",count);
}