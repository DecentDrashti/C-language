#include<stdio.h>
void main(){
    int n,i=1,s1=0,s2=0,sum=0,ans;
    printf("enter the number");
    scanf("%d",&n);
    while(i<=n){
     printf("\t%d",i);//or if(i%2==0) sum=sum-ielse sum=sum =i i++
     s1=s1+i;//for odd number 
     s2=s2+(i+1);//for even number 
     i=(i+2);
     }
     sum=s2-s1;
     printf("\nanswer=%d",sum);
}

