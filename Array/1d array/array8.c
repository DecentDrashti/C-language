#include<stdio.h>
void main(){
    int i,n,j,swap;
    printf("enter the value of n");
    scanf("%d",&n);
    int mark[n];
    for(i=0;i<n;i++){
        printf("enter the array element");
        scanf("%d",&mark[i]);
    }
    /*for(i=0;i<n;i++){
        printf("\nmark[%d]=%d ",i,mark[i]);
    }*/
    for(i=0;i<n;i++){//mota numbers hoi to avu ghani vakht swap karvu pade so
       for(j=0;j<(n-1);j++){//n-1 atle karan ke 5 no array hoi to apde 4>5 j compare karvanu hoi 5 ane 6 nai so
             if(mark[j]>mark[j+1]){
                 swap=mark[j+1];
                 mark[j+1]=mark[j];
                 mark[j]=swap;
             }
       }
    }
    printf("ascending order:");
    for(j=0;j<n;j++){
        printf("%d",mark[j]);
    }
}
