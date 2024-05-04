#include<stdio.h>
void main(){
    int n1,n2,i,j,pos=0,zero=0,neg=0;
    printf("enter the value of row");
    scanf("%d",&n1);
    printf("enter the value of coulumn");
    scanf("%d",&n2);
    int mark[n1][n2];
    for(i=0;i<n1;i++){
        for(j=0;j<n2;j++){
       printf("mark[%d][%d]",i,j,mark[i][j]);
        scanf("%d",&mark[i][j]);
   }
    }
   for(i=0;i<n1;i++){
    for(j=0;j<n2;j++){
        if(mark[i][j]>=0){
            if(mark[i][j]>0){
                pos++;
            }else{
                zero++;
            }
        }else{
            neg++;
        }}
   }printf("\n%d %d %d",pos,zero,neg);
}