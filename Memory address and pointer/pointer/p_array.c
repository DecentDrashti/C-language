//pointers and arrays
//the name of an array, is actually a pointer to the first element of the array.(The memory address of the first element is the same as the name of the array)
//This basically means that we can work with arrays through pointers!

// Get the memory address of the first array element
//printf("%p\n", &myNumbers[0]);
#include <stdio.h>
 
int main() {
  int myNumbers[4] = {25, 50, 75, 100};
  // Get the value of the first element in myNumbers
printf("%d", *myNumbers);

  // Get the value of the second element in myNumbers
  printf("%d\n", *(myNumbers + 1));

  // Get the value of the third element in myNumbers
  printf("%d", *(myNumbers + 2));
  //or loop through u can change the value like such
}