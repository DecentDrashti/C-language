#include<stdio.h>
void main(){
    int n,i,r,n1,sum=0;
    printf("enter the number");
    scanf("%d",&n);
    while(n!=0){
    i=n%10;
    sum=sum*10+1;
    n=n/1;
    }
    while(sum!=0){
        r=sum%10;
        switch(r){
            case 0: printf("zero");
                    break;
            case 1: printf("one");
                    break;
           case 2: printf("two");
                    break; 
            case 3: printf("three");
                    break;
            case 4: printf("four");
                    break;
            case 5: printf("five");
                    break; 
            case 6: printf("six");
                    break;
            case 7: printf("seven");
                    break;
            case 8: printf("eight");
                    break; 
            case 9: printf("nine");
                    break;
            default: printf("invalid input");
                    break;
        }
        sum=sum/10;
    }
}