#include<stdio.h>
void main(){
    int n1,n2,i,j;
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
            
            printf(" %d",mark[i][j]);
}printf("\n");
}
}