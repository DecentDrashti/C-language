#include<stdio.h>
int fact(int n){
    int ans=1,i;
    if(n==1){
        return 1;
    }
    return n*fact(n-1);
}
void main(){
    int n,ans=1,i,r;
    printf("value of n");
    scanf("%d",&n);
    r=fact(n);
    printf("answer=%d",r);
}