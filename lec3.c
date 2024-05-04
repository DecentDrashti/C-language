
    #include<stdio.h>
    void main(){
        int i,j,n=5,s=1;
    char ch='A';
    for(i=1;i<=n;i++){
      //space
        for(j=1;j<=(n-i);j++){
            printf(" ");//j=1 ma kai print nai kare atle space muki che
        }
        for(j=1;j<=2*i-1;j++){
            if(j%2==1){
                if(i%2==0){
            printf("%c",ch);
            ch++;
      }else{
    printf("%d",s);
    s++;
    }}else{
    printf(" ");
    }
   }printf("\n");
 }
    }
