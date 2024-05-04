#include<stdio.h>
int fact(int n){
    int ans=1,i;
    for(i=n;i!=0;i--){
        ans=ans*i;
    }return ans;
}
void main(){
    int n,ans=1,i,r;
    printf("value of n");
    scanf("%d",&n);
    r=fact(n);
    printf("answer=%d",r);
}