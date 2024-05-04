#include<stdio.h>
void main(){
    //for matrix 1
   int n1,n2,i,j,sum=0;
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
    //for matrix 2
   int m1,m2;
    printf("enter the value of row");
    scanf("%d",&m1);
    printf("enter the value of coulumn");
    scanf("%d",&m2);
    int arr[m1][m2];
    for(i=0;i<m1;i++){
        for(j=0;j<m2;j++){
        printf("arr[%d][%d]",i,j,arr[i][j]);
        scanf("%d",&arr[i][j]);
    }
    }for(i=0;i<n1;i++){
        for(j=0;j<n2;j++){ 
            sum=mark[i][j]+arr[i][j];
            printf(" mark[%d][%d]+arr[%d][%d]=%d",i,j,i,j,sum);

}printf("\n");
    }
}