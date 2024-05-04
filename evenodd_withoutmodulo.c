#include<stdio.h>
void main(){
  int a;
  printf("enter the number");
  scanf("%d",&a);
 
  if((a&1)==0){
    printf("even number");
  }else{
    printf("odd number");
  }
}
    