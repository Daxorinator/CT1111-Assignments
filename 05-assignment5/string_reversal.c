#include <stdio.h>
#include <string.h>
#include <ctype.h>

void main() {
    // Define input string to hold user input up to 4096 characters including null termination
    // Define output string to match length of input string
    char input[4096] = {'\0'};
    char output[4096] = {'\0'};

    // Print welcome & get string into input safely using gets_s()
    printf_s("Enter up to 4096 characters to be reversed:");
    gets_s(input, 4096);

    // Loop over input string in reverse, from last character to start of string
    // (This would be 0 to X where X = strlen() - 1, as strlen() counts number of characters)
    // Check if character is in alphabet, then copy it into output string
    for (int i = strlen(input) - 1; i >= 0; i--) {
        if (isalpha(input[i])) {
            strncat_s(output, 4096, &input[i], 1);
        }
    }

    // Print the output string
    printf_s("The reverse of the entered string is:\n");
    puts(output);
}

