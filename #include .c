/*
AUTHOR:GIDEON  BARASA 
REG PA107/G/24617
*/

#include <stdio.h>


void getCustomerInfo(char customerID[], char customerName[], int *unitConsumed);
void calculateBill(int unitConsumed, float *chargePerUnit, float *totalBill);
void displayBill(char customerID[], char customerName[], int unitConsumed, float chargePerUnit, float totalAmount);

int main() {
    char customerID[20];
    char customerName[50];
    int unitConsumed;
    float chargePerUnit, totalAmount;

    
    getCustomerInfo(customerID, customerName, &unitConsumed);

    
    calculateBill(unitConsumed, &chargePerUnit, &totalAmount);

    
    displayBill(customerID, customerName, unitConsumed, chargePerUnit, totalAmount);

    return 0;
}

void getCustomerInfo(char customerID[], char customerName[], int *unitConsumed) {
    printf("Enter Customer ID: ");
    scanf("%s", customerID);
    printf("Enter Customer Name: ");
    scanf(" %[^\n]", customerName);  
    printf("Enter Units Consumed: ");
    scanf("%d", unitConsumed);
}

void calculateBill(int unitConsumed, float *chargePerUnit, float *totalBill) {
    
    if (unitConsumed < 200) {
        *chargePerUnit = 1.20;
    } else if (unitConsumed < 400) {
        *chargePerUnit = 1.50;
    } else if (unitConsumed < 600) {
        *chargePerUnit = 1.80;
    } else {
        *chargePerUnit = 2.00;
    }

  
    *totalBill = unitConsumed * (*chargePerUnit);

    
    if (*totalBill > 400) {
        *totalBill *= 1.15; 
    }

  
    if (*totalBill < 100) {
        *totalBill = 100;
    }
}

void displayBill(char customerID[], char customerName[], int unitConsumed, float chargePerUnit, float totalAmount) {
    printf("\n--- Electricity Bill ---\n");
    printf("Customer ID: %s\n", customerID);
    printf("Customer Name: %s\n", customerName);
    printf("Units Consumed: %d\n", unitConsumed);
    printf("Charges per Unit: Ksh %.2f\n", chargePerUnit);
    printf("Total Amount to Pay: Ksh %.2f\n", totalAmount);
}