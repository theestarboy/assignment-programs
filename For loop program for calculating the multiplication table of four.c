#include <stdio.h>

int main() {
  int number = 4;
  int i;
  int j;
  
printf("Type \"1\" if you want the program to start and if not type \"0\" or any other number for the program to stop :");

scanf("%d",&j);
if(j==1){
  // Print the multiplication table for the number 4
  for (i = 1; i <= 10; i++){
    printf("%d x %d = %d\n", number, i, number * i);
  }
}
else if(j==0){

  printf("program stopped");
}else{
    printf("program stopped");}
  return 0;
}
