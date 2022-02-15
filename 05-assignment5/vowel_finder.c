#include <stdio.h>
#include <string.h>
#include <ctype.h>

void main() {
    // Define input string to hold user input up to 4096 characters including null termination
    // Define output string to match length of input string
    char input[4096] = {'\0'};
    char output[4096] = {'\0'};

    // Print welcome & get string into input safely using gets_s()
    printf_s("Enter up to 4096 characters to be sorted: ");
    gets_s(input, 4096);

    // Iterate over 'input' string, converting to lower case and matching vowels,
    // then adding to the output string.
    // A switch statement matches the current character against vowels
    // and adds them to the output string if a match is found.
    for (int i = 0; i < strlen(input); i++) {
        char input_char = tolower(input[i]);
        switch (input_char) {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
                // Add a character to a string using sprintf_s() by formatting a character in front of a string
                strncat_s(output, 4096, &input_char, 1);
            default:
                break;
        }
    }

    // Print the output string of ordered vowels
    printf_s("The following vowels were found in your string: ");
    puts(output);
}
