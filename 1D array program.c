#include <stdio.h>

int main() {
  
  int myNumbers[] = {13, 30, 15, 10};
  
  int length = sizeof(myNumbers) / sizeof(myNumbers[0]);
  
  int i;

  for (i = 0; i < length; i++) {
    printf("matrix[%d]=%d\n",i, myNumbers[i]);
  }
  
  return 0;
}