#include<stdio.h>
void main(){
  int i;
  float x[10],value,total=0.0;
  printf("enter 10 real number\n");
  for(i=0;i<10;i++){
    scanf("\n%f",&value);
    x[i]=value;
    total=total+x[i]*x[i];
    printf("\nx[%2d]=%5.2f\n",i,x[i]);//or i+1,x[i] for array to starts from 1
  }
  /*for(i=0;i<10;i++){
    total=total+x[i]*x[i];
    //printf("\n%f",total);
  }*/
  //printf("\n");
 /* for(i=0;i<10;i++){
    printf("\nx[%2d]=%5.2f\n",i+1,x[i]);
   } */
   printf("\ntotal=%.2f",total);
}