#include<math.h>
#include<stdio.h>
void main(){
    int n,a;
    printf("enter the perfect square number");
    scanf("%d",&n);
    while(n){
        printf("\nnumber\tsquare root");
        a=sqrt(n);
        printf("\n%d\t%d",n,a);
        break;
    }
}