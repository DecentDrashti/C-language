#include<stdio.h>
void main(){
  
  char s1[100],s2[100];
  int i,n1,n2;
  printf("string1");
  gets(s1);
  printf("string2");
  gets(s2);
  for(n1=0;s1[n1]!='\0';n1++){
    for(n2=0;s2[n2]!='\0';n2++){
      if(n1!=n2){
        printf("string are not equal");
       exit(0);
      }else
      {
    for(i=0;i<n1;i++){
      if(s1[i]!=s2[i]){
        break;
      }
    }
    }
    }
    }if(i==n1){
      printf("string are equal");
    }else{
      printf("string are not equal");
  }
}