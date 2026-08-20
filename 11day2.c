//Q22: Write a program to find profit or loss percentage given cost price and selling price.

#include <stdio.h>

int main()
{
    float CP, SP, loss, profit, lossPercent, profitPercent;

    printf("Enter Cost Price (CP):\nEnter Selling Price (SP):\n");
    scanf("%f %f", &CP, &SP);

    if (CP > SP)
    {
        loss = CP - SP;
        lossPercent = (loss / CP) * 100;
        printf("Loss is %f\n", loss);
        printf("Loss percent is %f%\n", lossPercent);
    }
    else if (SP > CP)
    {
        profit = SP - CP;
        profitPercent = (profit / CP) * 100;
        printf("Profit is %f\n", profit);
        printf("Profit percent is %f%\n", profitPercent);
    }
    else
    {
        printf("No profit, no loss.\n");
    }

    return 0;
}
    
