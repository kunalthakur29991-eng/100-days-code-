// Que 22 : Write a program to find profit and loss percentage given cost price and selling price . 
  #include <stdio.h>
   int main()
  {
    printf(" Name - Kunal thakur\n SAP id - 590028530\n Course - B.sc CS\n Batch - B1\n ");
    float costPrice, sellingPrice, profitLossPercent;

    printf("Enter Cost Price and Selling Price: ");
    scanf("%f %f", &costPrice, &sellingPrice);

    if (sellingPrice > costPrice) {
        profitLossPercent = ((sellingPrice - costPrice) / costPrice) * 100;
        printf("Profit %.2f%%\n", profitLossPercent);
    }
    else if (costPrice > sellingPrice) {
        profitLossPercent = ((costPrice - sellingPrice) / costPrice) * 100;
        printf("Loss %.2f%%\n", profitLossPercent);
    }
    else {
        printf("No Profit No Loss\n");
    }

    return 0;
}
