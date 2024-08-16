*/C program that calculates the sum of indices of prime values in an array/*


#include <stdio.h>

// Function to check if a number is prime
int isPrime(int n) {
    if (n <= 1) return 0; // 0 and 1 are not prime
    for (int i = 2; i * i <= n; ++i)
        if (n % i == 0) return 0; // n is not prime
    return 1; // n is prime
}

// Function to calculate the sum of indices of prime values
int sumOfPrimeIndices(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++)
        if (isPrime(arr[i])) sum += i; // Add index if value is prime
    return sum;
}

int main() {
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Sum of indices of prime values in the array: %d\n", sumOfPrimeIndices(arr, n));
    return 0;
}