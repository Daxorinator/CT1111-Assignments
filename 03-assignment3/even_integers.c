#include <stdio.h>

void main() {
    int sum = 0;

    // Loop from 2 to 30 inclusive, incrementing by 2 (even numbers only)
    for (int i = 2; i <= 30; i+=2) {
        // Add current number to the sum
        sum += i;
    }

    // Dump sum to console
    printf_s("The sum of even integers from 2 to 30 is: %d", sum);
}
