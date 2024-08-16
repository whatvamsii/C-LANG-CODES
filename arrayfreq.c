/* finding the most repeated number in a array of integers*/
#include <stdio.h>

int find_most_repeated(int arr[], int size) {
    int max_count = 0;
    int most_repeated_num = arr[0];

    // Iterate through each element to find the most repeated number
    for (int i = 0; i < size; i++) {
        int count = 0;

        // Count occurrences of arr[i]
        for (int j = 0; j < size; j++) {
            if (arr[j] == arr[i]) {
                count++;
            }
        }

        // Update most repeated number if count is greater than max_count
        if (count > max_count) {
            max_count = count;
            most_repeated_num = arr[i];
        }
    }

    return most_repeated_num;
}

int main() {
    int arr[100]; // Array to hold the input numbers
    int size;

    // Prompt user for input
    printf("Enter the number of elements: ");
    scanf("%d", &size);

    printf("Enter the numbers separated by spaces: ");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    int most_repeated_num = find_most_repeated(arr, size);
    printf("The most repeated number is %d\n", most_repeated_num);

    return 0;
}