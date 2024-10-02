#include <stdio.h>
#include <math.h> //For power function pow()

int main() {
    float principal,rate,time,compoundInterest,finalAmount;
    int n; // Number of times the interest is compounded per year
    //input values for principal,time,rate,and number of compounding periods
    printf("Enter the principal amount:");
    scanf("%f",&principal);
    printf("Enter the Time in(in years):");
    scanf("%f",&time);
    printf("Enter the Rate of interest(in percentage):");
    scanf("%f",&rate);
    printf("Enter the Number of compounding periods per year:");
    scanf("%d",&n);

    //convert rate from percentage to decimal
    rate=rate/100;

    //calculate final amount after compound interest
    finalAmount=principal*pow((1+rate/n),n*time);
    //calculate compound interest
    compoundInterest=finalAmount-principal;
    //display the results
    printf("Final Amount(including interest):%.2f\n",finalAmount);
    printf("compound Interest:%.2f\n",compoundInterest);

    return 0;

}
