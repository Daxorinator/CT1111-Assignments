# CT1111-Assignments
Repository containing assignments for CT1111 @ NUI Galway

#### 00-Hello-World - Hello World:
A simple "Hello World" application to test the compiler.

#### 01-Assignment1 - Double.c:
A program which asks for an input, doubles it and prints it.  
Introduces C Standard Library, `printf_s()` and `scanf_s()`.

#### 02-Assignment2 - Grades.c:
This program reads in 3 floats which represents 3 grades.  
The grades are weighted then added together and rounded down, to represent the final grade.  
The final grade is printed and then a series of if-else statements find the matching letter grade and prints it.
The grades are calculated as follows:  

| Percentage   | 70+ | 60-69 | 50-59 | 40-49 | <40 |
|--------------|-----|-------|-------|-------|-----|
| Letter Grade | A   | B     | C     | D     | E   |

#### 03-Assignment3 - Average.c:
This program reads in integers until a sentinel value is entered (9999),
and computes the average of all integers entered preceding the sentinel value.
The program ensures no divide-by-zero's are present then calculates a 2-decimal average
and prints it to the console, or returns "You have not entered any values".

#### 03-Assignment3 - Even_Integers.c:
This program finds sum of all even integers between 2 and 30 inclusive and prints it to the console.

#### 04-Assignment4 - Array_Average.c:
This program reads 15 integers into an array, then computes the average
of the numbers in the array and prints it to the console. The program then calculates and displays
the numbers in the array which are less than half the average of the array.

#### a-donut - Appendix A - Donut.c:
The well known donut.c program, in the shape of a donut, it prints out a rotating ASCII donut! (May not work on Clang or MSVC)