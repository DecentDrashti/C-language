#include <stdio.h>

int main() {
  int myAge = 43;
  
  printf("%d\n", myAge);// if we write & here than it will give address of myage number
  printf("%p\n", &myAge);//here it will give the address of variable
}
//Pointers are important in C, because they allow us to manipulate the data in the computer's memory - this can reduce the code and improve the performance.

//Pointers are one of the things that make C stand out from other programming languages, like Python and Java.