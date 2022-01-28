#include <stdio.h>

int main() {
    int input, output;

    printf_s("Hello World\n");
    printf_s("Enter a number: ");
    scanf_s("%d", &input);
    output = input * 2;
    printf_s("%d doubled is %d", input, output);
}