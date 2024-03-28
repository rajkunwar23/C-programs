#include <stdio.h>

// Function to calculate the sum of an array of numbers
int calculateSum(int arr[], int size)
 {
    int sum = 0;
    int i;
    for (i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum;
}

// Function to calculate the average of an array of numbers
float calculateAverage(int arr[], int size) {
    int sum = calculateSum(arr, size);
    return (float)sum / size;
}

int main()
 {
    int numbers[10];
    int i;

    printf("Enter 10 numbers:\n");
    for (i = 0; i < 10; i++) {
        printf("Number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    int sum = calculateSum(numbers, 10);
    float average = calculateAverage(numbers, 10);

    printf("Sum of the numbers: %d\n", sum);
    printf("\n average:=%2f",average);
    return 0;
    }
