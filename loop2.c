#include <stdio.h>

int main() {
  int No = 10;
  
  if (No > 0) {
    printf("The value is a positive number");
  } else if (No < 0) {
    printf("The value is a negative number");
  } else {
    printf("The value is 0");
  }
  
  return 0;
}