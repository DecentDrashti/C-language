#include<stdio.h>
struct employees{
    int salary;
    int holidays;
    char name[100];
};
void main(){
    int a,i;
    struct employees e[1];
    for(i=0;i<1;i++){
    printf("enter the employees name:");
    scanf(" %s",e[i].name);
    printf("\nenter the salary:");
    scanf(" %d",&e[i].salary);
    printf("\nenter the no of holidays taken:");
    scanf(" %d",&e[i].holidays);
    }

      printf("\nname\tholidays\tsalary");
    for(i=0;i<1;i++){
        printf("\n%s\t%d  \t%d",e[i].name,e[i].holidays,e[i].salary);
    }
  
}