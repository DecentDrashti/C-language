#include<stdio.h>
void main(){
    int n;
    printf("enter the number");
    scanf("%d",&n);
    switch(n){
        case 1:
        case 3:
        case 5:
        case 7: 
        case 8:
        case 10: 
        case 12:printf("31days");
        break;
    
        case 4:
        case 6:
        case 9: 
        case 11:printf("30days");
        break;
        case 2:printf("28days if not leap year and 29days if a leap year");
        break;  
    }
}