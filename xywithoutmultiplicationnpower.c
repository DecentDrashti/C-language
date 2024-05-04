#include<stdio.h>
void main(){
int x,y,i,j,ans=0,temp;
printf("enter the value of x");
scanf("%d",&x);
printf("enter the value of exponents y");
scanf("%d",&y);
temp=x;
for(i=1;i<=(y-1);i++){
    ans=0;
    for(j=1;j<=x;j++){
    ans=ans+temp;
}
temp=ans;
}
//printf("sum=%d",sum);
/*for(i=1;i<=x;i++){
 ans=ans+sum;
}*/
printf("\nx^y=%d",ans);
}