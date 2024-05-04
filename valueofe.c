#include<stdio.h>
void main(){
    float i,j,temp,sum=1,ans=1,n;
    printf("enter the number");
    scanf("%f",&n);
    temp=n;
    for(i=1;i<=n;i++){
        ans=1;
        for(j=1;j<=temp;j++){
            ans=ans*j;
           
    }
      sum=sum+1/(ans);
      temp=temp-1;    
    }
    printf("\n%f",sum);
    
}