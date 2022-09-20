// Knapsack Fractional

#include <stdio.h>

int main()
{
    int n, i, j, temp, count = 0;
    float profit[10], weight[10], ratio[10], capacity, totalprofit = 0, x[10];
    printf("Enter the number of objects: ");
    scanf("%d", &n);
    printf("Enter the profit and weight of each object: ");
    for (i = 0; i < n; i++)
    {
        scanf("%f %f", &profit[i], &weight[i]);
    }
    printf("Enter the capacity of the knapsack: ");
    scanf("%f", &capacity); // 15
    for (i = 0; i < n; i++)
    {
        ratio[i] = profit[i] / weight[i];
    }
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (ratio[i] < ratio[j])
            {
                // swap ratio, profit and weight
                temp = ratio[j];
                ratio[j] = ratio[i];
                ratio[i] = temp;
                temp = profit[j];
                profit[j] = profit[i];
                profit[i] = temp;
                temp = weight[j];
                weight[j] = weight[i];
                weight[i] = temp;
            }
        }
    }
    for (i = 0; i < n; i++)
    {
        x[i] = 0.0;
    }
    for (i = 0; i < n; i++)
    {
        if (weight[i] > capacity)
            break;
        else
        {
            x[i] = 1.0;
            totalprofit = totalprofit + profit[i];
            capacity = capacity - weight[i];
        }
    }
    if (i < n)
        x[i] = capacity / weight[i];
    totalprofit = totalprofit + (x[i] * profit[i]);
    printf("The result vector is: ");
    for (i = 0; i < n; i++)
    {
        printf("%.2f ", x[i]);
    }
    printf("Total profit is: %.2f", totalprofit);
}
