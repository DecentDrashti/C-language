#include<stdio.h>
#include<math.h>
void main(){
    int n,i,fd,ld,q,count=0,a;//fd first digit ld last digit
    float s;
    printf("enter the number");
    scanf("%d",&n);
    q=n;
    for(i=1;n!=0;i++){
        count=count+1;
        n=n/10;
    }
    ld=q%10;//last digit
    s=pow(10,(count-1));
    a=fd*s;
    q=q-a;
    q=q-ld+fd;
    q=q+(ld*s);
    printf("\nswap digit=%d",q);
}