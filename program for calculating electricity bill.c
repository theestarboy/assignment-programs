#include <stdio.h>

int main() {
    int customerID, units;
    char customerName[50];
    float chargePerUnit, totalBill, surcharge = 0.0;

    // Prompt the user for inputs
    printf("Enter Customer ID: ");
    scanf("%d", &customerID);
    printf("Enter Customer Name: ");
    scanf("%s", customerName);
    printf("Enter Units Consumed: ");
    scanf("%d", &units);

    // Calculate charges based on units consumed
    if (units <= 199) {
        chargePerUnit = 1.20;
    } else if (units >= 200 && units < 400) {
        chargePerUnit = 1.50;
    } else if (units >= 400 && units < 600) {
        chargePerUnit = 1.80;
    } else {
        chargePerUnit = 2.00;
    }

    // Calculate total bill without surcharge
    totalBill = units * chargePerUnit;

    // Apply surcharge if total bill exceeds 400
    if (totalBill > 400) {
        surcharge = 0.15 * totalBill;
        totalBill += surcharge;
    }

    // Apply minimum bill condition
    if (totalBill < 100) {
        totalBill = 100;
    }

    // Display the output
    printf("\n--- Electricity Bill ---\n");
    printf("Customer ID: %d\n", customerID);
    printf("Customer Name: %s\n", customerName);
    printf("Units Consumed: %d\n", units);
    printf("Charges per Unit: %.2f\n", chargePerUnit);
    printf("Total Amount to Pay: %.2f Ksh\n", totalBill);
 return 0;
}