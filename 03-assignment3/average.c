#include <stdio.h>

void main() {
    // Define & init variables
    int sum = 0; // Used to keep track of sum of terms
    int count = 0; // Used to keep track of number of terms
    int input = 0; // Temporarily holds input value

    // Read in initial value
    printf_s("Enter a value:");
    scanf_s("%d", &input);

    // 9999 is sentinel value, skip if sentinel entered
    while (input != 9999) {
        // Continue summing terms and incrementing number of terms
        sum += input;
        count++;

        // Read another value to continue looping
        printf_s("Enter a value:");
        scanf_s("%d", &input);
    }

    // Prevent divide by 0 if sentinel is entered with no values
    if (count > 0) {
        // Explicit cast to show decimals, e.g 3/2 = 1.5
        // Integer division will only return integers, an explicit cast is required.
        float average = (float)sum / (float)count;
        printf_s("The average of the entered values is: %.2f", average);
    } else {
        printf_s("You have not entered any values.");
    }
}