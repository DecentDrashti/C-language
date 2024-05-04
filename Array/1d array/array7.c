#include<stdio.h>
#include<math.h>
void main(){
    int i,n;
    float sum=0,avg=0,g=1,gm=0,temp,h=0,hm=0,d;
    printf("enter the value of n");
    scanf("%d",&n);
    int mark[n];
    for(i=0;i<n;i++){
        printf("enter the array element");
        scanf("%d",&mark[i]);
   }
    for(i=0;i<n;i++){
           sum=sum+mark[i];
            }
            //printf("\nsum=%f",sum);
        for(i=0;i<n;i++){
            avg=sum/n;
    
        }printf("\navg mean=%f",avg);
       for(i=0;i<n;i++){
      g=g*mark[i];
}
printf("\n%f",g);
temp=n;
gm=pow(g,1/temp);
printf("\ngeometric mean=%f",gm);
for(i=0;i<n;i++){
    d=mark[i];
    printf("%d",d);
    h=h+1/d;
}
printf("\n%f",h);
hm=temp/h;
printf("\nharmonic mean=%f",hm);
}