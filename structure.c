#include <stdio.h>

// Create a structure called myStructure
struct myStructure {
  int myNum;
  char myLetter;
};

int main() {
  // Create a structure variable of myStructure called s1
  struct myStructure s1;

  // Assign values to members of s1
  s1.myNum = 11;
  s1.myLetter = 'A';

  // Print values
  printf("My No is %d\n", s1.myNum);
  printf("My No is %c\n", s1.myLetter);

  return 0;
}