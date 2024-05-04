#include<stdio.h>
void main(){
    int i=1,n,ans=0,sum=0;
    while(i<11){
        printf("enter the number");
        scanf("%d",&n);
        if(n%2==0){
            ans=ans+1;

        }else{
            sum=sum+1;
        }
        i++;
    }
    printf("\n%d %d",ans,sum);
}