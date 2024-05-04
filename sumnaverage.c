#include<stdio.h>
void main(){
    int n=0,sum=0,average=0,i=0;
    while(n!=-1){
        printf("enter the value of n");
        scanf("%d",&n);
        if(n!=-1){ //or if(-1) break
            i=i+1;
          sum=sum+n;
          average=(sum)/i;
    }else{
        printf("exit");
    }

     printf("\n%d %d",sum,average);   

}
}