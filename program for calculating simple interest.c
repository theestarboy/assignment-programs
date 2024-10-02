#include <stdio.h>
int main(){
    float principal,rate,time,interest;
    //take users input for principal,time,rate,interest

    printf("enter the principal amount:");
    scanf("%f",&principal);
    printf("enter the rate:");
    scanf("%f",&rate);
    printf("enter time(in years):");
    scanf("%f",&time);
    //calculate the simple interest

    interest=(principal*rate*time)/100;
    // display the results

    printf("The simple interest is:%.2f\n",interest);

    return 0;
}
