#include<stdio.h>
#include<stdlib.h>
void main(){
    int i,ans=0,j,r1,c1,r2,c2,k;
    int A[10][10],B[10][10],C[10][10];
    char o;
    printf("choose operation:\na.addition\nb.subtraction\nc.multiplication\nd.transpose\ne.trace\nf.determinant\ng.inverse\nh.exit\nselect: ");
    scanf("%c",&o);
    //matrix 1
    printf("enter the number of row and column for matrix 1:");
    scanf("%d %d",&r1,&c1);
    printf("enter the elements of matrix 1:\n");
     for (i=0;i<r1;i++){
        for (j=0;j<c1;j++){
            scanf("%d",&A[i][j]);
            printf("\t");
        }printf("\n");
     }
     //matrix 2
     printf("enter the number of row and column for matrix 2:");
    scanf("%d %d",&r2,&c2);
     printf("enter the elements of matrix 2:\n");
     for (i=0;i<r2;i++){
        for (j=0;j<c2;j++){
            scanf("%d",&B[i][j]);
            printf("\t");
        }printf("\n");
     }
//for addition
     if(o==97){
        if(r1==r2 && c1==c2){
     for(i=0;i<r1;i++){
        for(j=0;j<c1;j++){ 
            ans=A[i][j]+B[i][j];
            printf(" A[%d][%d]+B[%d][%d]=%d",i,j,i,j,ans);

      }printf("\n");
  }
  }  
} 
//for subtraction
     if(o==98){
        if(r1==r2 && c1==c2){
     for(i=0;i<r1;i++){
        for(j=0;j<c1;j++){ 
            ans=A[i][j]-B[i][j];
            printf(" A[%d][%d]-B[%d][%d]=%d",i,j,i,j,ans);

      }printf("\n");
  }
  }  
} 
//for multiplication
if(o=99){
    if(c1==r2){
for(i=0;i<r1;i++){
    for(j=0;j<c2;j++){
        C[i][j]=0;
           for(k=0;k<r2;k++){
                C[i][j]+=A[i][k]*B[k][j];
            }
            printf("%d\t",C[i][j]);
        }
      }
     }else{
        printf("doba sarkhu nakh multiplication nathi thay em");
     }
    }
//for transpose
if(o=100){
 for(i=0;i<r1;i++){
        for(j=0;j<c1;j++){ 
             C[i][j]=A[i][j];
    }
 }
 for(i=0;i<r1;i++){
        for(j=0;j<c1;j++){
       A[i][j]=C[j][i];
          A[j][i]=C[i][j]; 
    printf("\nA[%d][%d]=%d",i,j,A[i][j]);
  }
 }
}

//for trace
if(o=101){
    printf("trace for matrix 1");
     for(i=0;i<r1;i++){
        for(j=0;j=i;j++){ 
            ans+=A[i][j];
         }printf("\n");
       }printf("answer=%d",ans);
       printf("trace for matrix 2");
        for(i=0;i<r2;i++){
        for(j=0;j=i;j++){ 
            ans+=B[i][j];
         }printf("\n");
       }printf("answer=%d",ans);
     }








}
