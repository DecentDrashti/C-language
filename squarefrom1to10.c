#include<math.h>
#include<stdio.h>
void main(){
    int n,a;
    printf("enter the number");
    scanf("%d",&n);
    while(n){
        printf("\nnumber\tsquare");
        a=n*n;
        printf("\n%d\t%d",n,a);
        break;
    }
}