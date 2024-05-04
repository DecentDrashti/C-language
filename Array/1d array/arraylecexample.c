#include<stdio.h>
void main(){
    int n,i,j,count=0,max=0;
    printf("enter the value of n");
    scanf("%d",&n);
    int mark[n];
    for(i=0;i<n;i++){
        printf("enter the array element");
        scanf("%d",&mark[i]);
    }
for(i=0;i<n;i++){
    for(j=i+1;j<n;j++){
             if(mark[i]==mark[j]){
                count=count+1;
             }
       }
}printf("%d",count);
/*if(count<=3){
printf("yes");
}else{
    printf("No");
}max=mark[0];
for(j=0;j<n;j++){
    if(mark[i]<max){
      printf("no");
      break;
    }
}*/

}