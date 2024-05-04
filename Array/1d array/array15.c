#include<stdio.h>
void main(){
    char a[100];
    printf("enter the string");
    gets(a);
    int i,count=0;
    for(i=0;a[i]!='\0';i++){
        count++;
    }
    printf("string=%d",a);
    printf("string length=%d",count);
}