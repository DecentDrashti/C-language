#include<stdio.h>
#include<string.h>
void main(){
    char a[100],p;
    int i,d;
    printf("enter the value of a ");
    gets(a);
    d=strlen(a);
    printf("enter the char: ");
    scanf("%c",&p);
    for(i=0;i<=d;i++){
       if(a[i]==p){
        printf("char[%d]=%c",i,p);
        break;
       }

    }
}