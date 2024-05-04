#include<stdio.h>
void main(){
    int n,a,d,i,j,swap,temp;
    
    
    printf("enter the number");
    scanf("%d",&n);
    printf("enter the digits of number");
    scanf("%d",&d);
    printf("number between 0 to 9=");
    scanf("%d",&a); 
    int arr[d];
    for(i=0;i<d;i++){
          arr[i]=n%10;
          n=n/10;
          printf("arr[%d]=%d",i,arr[i]);
          
    }
          
    
    for(i=0;i<d+1;i++){
       for(j=0;j<d;j++){//n-1 atle karan ke 5 no array hoi to apde 4>5 j compare karvanu hoi 5 ane 6 nai so
             if(arr[j]>arr[j+1]){
                 swap=arr[j+1];
                 arr[j+1]=arr[j];
                 arr[j]=swap;
                 temp=arr[j+1];
             } } }
    for(i=0;i<d+1;i++){
       //for(j=0;j<d;j++){
    if(a>arr[i]){
       printf("%d",a);
       }}
    printf("greatest=%d",temp);
    printf("\n");
    
    for(j=d-1;j>=0;j--){
        printf("%d",arr[j]);
    }
}
