#include<stdio.h>
void main(){
 char answer;
 printf("would you like to know my name?\n");
 printf("type y for yes and n for no:");
answer=getchar();//getchar is successively called to read the character contained in a line text
if(answer=='y'){
    printf("\n\nmy name is busy bee");

}else{
    printf("\n\nyou are good for nothing\n");
}
}