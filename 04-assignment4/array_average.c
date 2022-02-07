#include <stdio.h>

void main() {
    int numbers[15]; // Holds ints to be averaged
    int sum = 0; // Holds sum of ints to be averaged
    float average = 0.00f; // Holds average with 2 decimal precision

    // Loop from 0 to 14 to fill numbers[15] & compute sum
    for (int i = 0; i < 15; i++) {
        printf_s("Enter %dth number to be averaged: \n", i+1);
        scanf_s("%d", &numbers[i]);
        sum += numbers[i];
    }

    // Calculate the average using float to 2 decimals
    average = sum / 15.00f;

    // Print average, allowing for 2 decimals if needed
    printf_s("The average of the numbers entered is: %.2f\n", average);

    // For + if loop to check for values < half of average and print them
    for (int i = 0; i < 15; i++) {
        if (numbers[i] < (0.5f * average)) {
            printf_s("%d is less than half the average value.\n", numbers[i]);
        }
    }
}
