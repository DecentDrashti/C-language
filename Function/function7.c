#include<stdio.h>
#include<string.h>
void main(){
    char a[100],b[100];
    printf("enter the value of a");
    gets(a);
    printf("enter the value of b");
    gets(b);
    printf("string length=%d",strlen(a));
    printf("\nstring compare=%d",strcmp(a,b));
    
    printf("\nstringcat=%s",strcat(a,b));
    printf("\nstring lower case=%s",strlwr(b));
    printf("\nstring uppercase=%s",strupr(a));
    printf("\nstring reverse=%s",strrev(a));
    
    printf("\nstring copy=%s",strcpy(a,b));
}