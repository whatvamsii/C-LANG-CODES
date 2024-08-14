//C Code to Print Common Digits in Three Numbers
#include <stdio.h>

int main() {
    int a, b, c;
    printf("Enter three integers: ");
    scanf("%d%d%d", &a, &b, &c);

    // Array to count occurrences of each digit
    int d[10] = {0};

    // Function to count digits in a number
    void countDigits(int num) {
        while (num > 0) {
            int digit = num % 10; // Extract the last digit
            d[digit]++;   // Increment the count for this digit
            num /= 10;             // Remove the last digit
        }
    }

    // Count digits for each number
    countDigits(a);
    countDigits(b);
    countDigits(c);

    // Print common digits (those that appear in all three numbers)
    printf("Common digits in all three numbers: ");
    for (int i = 0; i < 10; i++) {
        if (d[i] > 0 && d[i] ==3 || d[i]==4 || d[i]==5 || d[i]==6 ||d[i]==7 || d[i]==8 || d[i]== 9) 
        {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}
