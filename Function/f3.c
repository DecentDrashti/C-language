#include <stdio.h>

// Function declaration
int myFunction(int, int);

// The main method
int main() {  
  int result = myFunction(5, 3);  // call the function
  printf("Result is = %d", result);
}

// Function definition
int myFunction(int x, int y) {
  return x + y;
}