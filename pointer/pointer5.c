#include<stdio.h>
void main(){
    int n,x;
    printf("enter the value");
    scanf("%d",&n);
    int mark[n],i;
    for(i=0;i<n;i++){
        printf("mark[%d]=",i);
        scanf("%d",&mark[i]);
    }int *a;
    for(i=0;i<n;i++){
        a=&mark[i];
        printf("mark[%d]=%d",i,*a);
}
}