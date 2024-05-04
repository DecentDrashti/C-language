#include<stdio.h>
void main(){
    char r;
    printf("enter the character");
    scanf("%c",&r);
    (('A'<=r) && (r<='Z')) ||(('a'<=r)&&(r<='z'))?printf("alphabet"):printf("not an alphabet");
}