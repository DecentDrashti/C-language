#include<stdio.h>
void main(){
    int i=97,n=65;
    printf("lowercase");
    while(i<=122){
        printf(" %c",i);
        i++;
    }
    printf("\nuppercase");
    while(n<=90){
        printf(" %c",n);
        n++;
    }
}