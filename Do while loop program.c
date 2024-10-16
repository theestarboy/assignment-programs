#include <stdio.h>

int main() {
  int i = 0;
  int j;
  printf("if you want the program to start type \"1\",if not type any other number :");
  scanf("%d",&j);
  if(j==1){
  do {
    printf("%d\n", i);
    i++;
  }
  while (i < 21);
  
  }else{
printf("program stopped");
 }
   return 0;
}
