#include<stdio.h>
void main(){
    int n,a=0,b=1,i,c,temp;
    printf("enter the number");
    scanf("%d",&n);
    printf("%d\t%d",a,b);
    for(i=1;i<(n-1);i++){
         c=a+b;
         temp=b;
         printf("\t%d",c);
         b=c;
         a=temp;
         
    }
}