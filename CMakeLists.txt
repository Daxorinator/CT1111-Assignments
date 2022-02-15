cmake_minimum_required(VERSION 3.21)
project(CT1111_Assignments C)

set(CMAKE_C_STANDARD 11)

add_executable(HelloWorld
        00-hello-world/HelloWorld.c)

add_executable(Assignment1
        01-assignment1/double.c)

add_executable(Assignment2
        02-assignment2/grades.c)

add_executable(Donut
        a-donut/donut.c)

add_executable(Assignment3-average
        03-assignment3/average.c)

add_executable(Assignment3-integers
        03-assignment3/even_integers.c)

add_executable(Assignment4-array_average
        04-assignment4/array_average.c)

add_executable(Assignment5-vowel_finder
        05-assignment5/vowel_finder.c)

add_executable(Assignment5-string_reversal
        05-assignment5/string_reversal.c)