#include<stdio.h>
void main(){
    int n;
    printf("enter the value");
    scanf("%d",&n);
    int mark[n],i;
    for(i=0;i<n;i++){
        printf("enter the array element");
        scanf("%d",&mark[i]);
    }for(i=0;i<5;i++){
        printf("\nmark[%d]=%d ",i,mark[i]);
    }
    int arr[n];
    for(i=0;i<n;i++){
        arr[i]=mark[i];
        printf("\narr[%d]=%d ",i,arr[i]);
    }
}