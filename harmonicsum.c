#include<stdio.h>
void main(){
 int n;
 float sum=0.0,i=1;
 printf("enter the value of n");
 scanf("%d",&n);
while(i<=n){
   //printf("\t1/%f ",i);
   sum+=1/i;
  // printf("\n%f",sum);
   i++;
}printf("\nsum=%f",sum);
}