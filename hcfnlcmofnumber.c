#include<stdio.h>
void main(){
    int n,m,i=1,j=1,temp;
    printf("enter the number");
    scanf("%d",&m);
    while(j<=m){
         if(n%j==0){
            printf("%d",j);
         }j++;
    }
    printf("\nenter the number ");
    scanf("%d",&n);
    while(i<=n){
         if((n%i)==0){
            printf("%d",i);
         }
         i++;
    }
    if(i=j){
        i=j=temp;
        printf("\n%d",temp);
    }
}