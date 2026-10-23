// 1 – Calculate Electricity Bill
// Problem Statement: Accept the number of electricity units consumed and calculate the total bill using the
// following slab-wise rates. Each slab rate applies only to units within that slab.
// First 100 units: ₹5 per unit
// Next 100 units: ₹7 per unit
// Above 200 units: ₹10 per unit
// Negative unit consumption is invalid.

#include <stdio.h>
#include <stdlib.h>

void CalculateElectricityBill(int iUnits)
{
    float fBill = 0.0f;

    if (iUnits < 0)
    {
        printf("Invalid unit");
    }
    else if (iUnits <= 100)
    {
        fBill = iUnits * 5;
        printf("Bill = %.2f", fBill);
    }
    else if (iUnits <= 200)
    {
        fBill = (100 * 5) + ((iUnits - 100) * 7);
        printf("Bill = %.2f", fBill);
    }
    else
    {
        fBill = (100 * 5) + (100 * 7) + ((iUnits - 200) * 10);
        printf("Bill = %.2f", fBill);
    }
}

int main()
{
    int iUnits = 0;

    printf("Enter consumed units: ");
    scanf("%d", &iUnits);

    CalculateElectricityBill(iUnits);

    return EXIT_SUCCESS;
}