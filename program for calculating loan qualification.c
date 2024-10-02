#include <stdio.h>
int main(){
   int age;
   int salary;
   //prompt the user to enter age
   printf("enter the age:");
   scanf("%d",&age);
   //prompt the user to enter the salary
   printf("enter the salary:");
   scanf("%d",&salary);
   if (age>21,salary>21000){
   printf("congratulations,you qualify for a loan");
   } else {
       printf("unfortunately,we are unable to offer you aloan at this time");
   }
     return 0;
}
