#include<stdio.h>
#include<stdlib.h>
void main(){
    int r1,c1,r2,c2,i,j,k;
    int a[10][10],b[10][10],c[10][10];
    printf("enter the row and column of matrix 1:");
    scanf("%d %d",&r1,&c1);
    printf("enter the row and column of matrix 2:");
    scanf("%d %d",&r2,&c2);
    if (c1!=r2){
        printf("nathi kevu ja"); 
        exit(0);// stdlib is used for these to be worked directly or you need to be defined it priorly
    }
     printf("enter the elements of matrix 1:\n");
     for (i=0;i<r1;i++){
        for (j=0;j<c1;j++){
            scanf("%d",&a[i][j]);
            printf("\t");
        }printf("\n");
     }
     printf("enter the elements of matrix 2:\n");
     for (i=0;i<r2;i++){
        for (j=0;j<c2;j++){
            scanf("%d",&b[i][j]);
            printf("\t");
        }printf("\n");
     }
     for(i=0;i<r1;i++){
        for(j=0;j<c2;j++){
            c[i][j]=0;
            for(k=0;k<r2;k++){
                c[i][j]+=a[i][k]*b[k][j];
            }
        }
     }printf("matrix mutiplication :");
     for(i=0;i<r1;i++){
        for(j=0;j<c2;j++){
         printf("%d\t",c[i][j]); 
       }printf("\n");
    }
  
}