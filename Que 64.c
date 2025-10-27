//Q64: Find the digit that occurs the most times in an integer number. 
  #include <stdio.h>

int main()
 {
     printf(" Name - Kunal thakur\n SAP id - 590028530\n Course - B.sc CS\n Batch - B1\n ");
    long num;
    int count[10] = {0}; 
    int i, maxCount = 0, maxDigit = 0;

    printf("Enter a number: ");
    scanf("%ld", &num);

    while(num != 0) {
        int digit = num % 10;
        count[digit]++;
        num /= 10;
    }

    for(i = 0; i < 10; i++) {
        if(count[i] > maxCount) {
            maxCount = count[i];
            maxDigit = i;
        }
    }

    printf("Digit occurring most: %d\n", maxDigit);

    return 0;
}
