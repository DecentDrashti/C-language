#include<stdio.h>
void main(){
    int i,j,n=5;
    for(i=1;i<=n;i++){
      //space
        for(j=1;j<=(n-i);j++){
            printf(" ");//j=1 ma kai print nai kare atle space muki che
        }
        for(j=1;j<=2*i-1;j++){
            if(j==1 ||i==n||j==2*i-1){
            printf("*");
      }else{
    printf(" ");
   }
 }printf("\n");
}
}