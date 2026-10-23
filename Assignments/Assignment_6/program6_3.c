// 3 – Calculate Shopping Discount
// Problem Statement: Accept the total purchase amount and calculate the final payable amount after applying
// the following discount rules. Negative purchase amounts are invalid.
// Below ₹1000: 0% discount
// ₹1000 to below ₹5000: 10% discount
// ₹5000 and above: 20% discount

#include <stdio.h>
#include <stdlib.h>

void CalculateDiscount(float fAmount)
{
    float fDiscount = 0.0f;
    float fFinalAmount = 0.0f;

    if ( fAmount < 0){
        printf("Invalid");
    }
    else if ( fAmount < 1000){
        fDiscount = 0.0f;
        fFinalAmount = fAmount - (fAmount * (fDiscount / 100));
        printf("Payable Amount = %f", fFinalAmount);
    }
    else if (fAmount >= 1000 && fAmount < 5000){
        fDiscount = 10.0f;
        fFinalAmount = fAmount - (fAmount * (fDiscount / 100));
        printf("Payable Amount = %f", fFinalAmount);
    }
    else{
        fDiscount = 20.0f;
        fFinalAmount = fAmount - (fAmount * (fDiscount / 100));
        printf("Payable Amount = %f", fFinalAmount);
    }

    // if (fAmount < 0)
    // {
    //     printf("Invalid");
    // }
    // else if (fAmount < 1000)
    // {
    //     fDiscount = 0.0f;
    //     fFinalAmount = fAmount - (fAmount * (fDiscount / 100));
    //     printf("Payable Amount = %.2f", fFinalAmount);
    // }
    // else if (fAmount < 5000)
    // {
    //     fDiscount = 10.0f;
    //     fFinalAmount = fAmount - (fAmount * (fDiscount / 100));
    //     printf("Payable Amount = %.2f", fFinalAmount);
    // }
    // else
    // {
    //     fDiscount = 20.0f;
    //     fFinalAmount = fAmount - (fAmount * (fDiscount / 100));
    //     printf("Payable Amount = %.2f", fFinalAmount);
    // }

}

int main()
{
    float fAmount = 0.0f;

    printf("Enter purchase amount: ");
    scanf("%f", &fAmount);

    CalculateDiscount(fAmount);

    return EXIT_SUCCESS;
}