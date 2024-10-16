#include <stdio.h>

int main() {
  int countdown = 10;
  int j;
  printf("if you want to start type\"1\",if not type any other number :");
  scanf("%d",&j);
  
  if(j==1){
while (countdown > 0) {
    printf("%d\n", countdown);
    countdown--;
}
    printf("Happy New Year!!\n");
  }
  else if(j!=1){
      printf("program stopped");
  }

  return 0;
}
