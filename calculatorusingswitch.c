#include<stdio.h>
void main(){
    int a,b;
    char c;
    printf("enter the operation");
    scanf("%c",&c);
    printf("enter the value of a and b");
    scanf("%d %d",&a,&b);
    switch(c){
    case '+':printf("%d",a+b);
    break;
    case '-':printf("%d",a-b);
    break;
    case '*':printf("%d",a*b);
    break;
    case '/':printf("%d",a/b);
    break;
    }

}