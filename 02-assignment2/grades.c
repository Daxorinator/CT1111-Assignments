#include <stdio.h>
#include <math.h>

void main() {
    // Define & Initialise scores & weights
    float lab = 0.0f, exam = 0.0f, assignment = 0.0f;
    float lab_weight = 0.5f, exam_weight = 0.25f, assignment_weight = 0.25f;

    // Get score for lab
    printf_s("Enter score for lab:");
    scanf_s("%f", &lab);

    // Get score for exam
    printf_s("Enter score for exam:");
    scanf_s("%f", &exam);

    // Get score for assignment
    printf_s("Enter score for the assignment:");
    scanf_s("%f", &assignment);

    // Calculate final score by multiplying scores with weights, adding them and rounding down.
    float final_score = floorf(
        (lab * lab_weight) + (exam * exam_weight) + (assignment * assignment_weight)
    );

    // Display final score
    printf_s("Final Score: %.0f%% \n", final_score);

    // Match final scores to letter grades by sifting upward from 40%
    if (final_score < 40.0f) {
        printf_s("Letter Grade: E");
    } else if (final_score < 50.0f) {
        printf_s("Letter Grade: D");
    } else if (final_score < 60.0f) {
        printf_s("Letter Grade: C");
    } else if (final_score < 70.0f) {
        printf_s("Letter Grade: B");
    } else {
        printf_s("Letter Grade: A");
    }
}

