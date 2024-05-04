#include<stdio.h>
#include<string.h>
void main(){
    char a[100],d,r;
    int i,p;
    printf("enter the value of a ");
    gets(a);
    p=strlen(a);
    printf("enter the char which is to be replace: ");
    scanf("%c",&r);
    printf("enter the char which is to be placed: ");
    scanf(" %c",&d);//string pachi string ne char pachi char use karye to space devi pade
    for(i=0;i<=p;i++){
       if(a[i]==r){
         a[i]=d;
       }
}printf("%s",a);
}