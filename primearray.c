/*C program that calculates the sum of indices of prime values in an array*/


#include <stdio.h>

// Function to check if a number is prime
int isPrime(int n) {
    if (n <= 1) {
        return 0; // 0 and 1 are not prime
    }
    for (int i = 2; i * i <= n; ++i) { // Check up to the square root of n
        if (n % i == 0) {
            return 0; // n is not prime
        }
    }
    return 1; // n is prime
}

// Function to calculate the sum of indices of prime values
int sumOfPrimeIndices(int input1[], int input2) {
    int sum = 0;
    for (int i = 0; i < input2; i++) {
        // Check if the value at the current index is prime
        if (isPrime(input1[i])) {
            sum += i; // Add the index if the value is prime
        }
    }
    return sum;
}

int main() {
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    // Dynamic array allocation
    int arr[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Calculate the result
    int result = sumOfPrimeIndices(arr, n);
    printf("Sum of indices of prime values in the array: %d\n", result);

    return 0;
}