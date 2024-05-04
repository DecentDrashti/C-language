#include<stdio.h>
void main(){
    /*sum of digit of number and the number whose sum of digit is greater that number is greater*/
  int n1,n,m,i=1,a=0,m1,b=0,t1,t2;
  printf("enter the integer value of n,m");
  scanf("%d %d",&n,&m);
  t1=n;
  t2=m;
  while(t1>0){
   a=a+(n%10);
    t1=t1/10;
   
  }
  while(t2>0){
    b=b+(m%10);
    t2=t2/10;
  }
if(a!=b){
  if(a>b){
    printf("\n%d",n);
  }else{
    printf("\n%d",m);
  }
}else{
  printf("\n-1");
}
}
    
