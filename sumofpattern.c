#include<stdio.h>
void main(){
    int i,j,ans=0,n;
    printf("enter the number");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            printf("%d+",j);
            ans=ans+j;
        }
    }printf("\n%d",ans);
}