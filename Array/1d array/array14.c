#include<stdio.h>
void main(){
    int n;
    printf("enter the value");
    scanf("%d",&n);
    int mark[n],i;
    for(i=0;i<n;i++){
        printf("enter the array element");
        scanf("%d",&mark[i]);
    }for(i=0;i<n;i++){
        printf("\nmark[%d]=%d ",i,mark[i]);
    }
    int x;
    printf("\nenter the element");
    scanf("%d",&x);
    for(i=0;i<n;i++){
        if(mark[i]==x){
            printf("mark[%d]=%d",i,x);
            break;
        }

}
}