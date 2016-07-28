/*
    Fibonacci
    Prints out the first n (where n set as a constant)
    digits in the Fibonacci sequence.

    This program is for the Week 2 assignment in the
    Coursera The Arduino Platform and C Programming course.

    Instructions:
        Write a program in C that computes and prints out the first
        six digits in the Fibonacci sequence. You will need to look
        up the definition of the Fibonacci sequence if you don't
        know it. The first two numbers in the sequence are 0 and 1,
        but your program should compute the next four digits. Turn
        in your C program. Your C program must compile in order for
        it to be tested.

    Filename: fibonacci.c
    Version: 1.0
    Date: 27 July 2016
    Author: Brent P. Johnson

    Verification environment:
        Windows 7
        Code:Blocks 16.01
        GNU GCC Compiler

*/

#include <stdio.h>

int main()
{
    // A constant NUM_FIB is used to set the number of Fibonacci numbers to be printed
    const int  NUM_FIB = 6;

    // Fn-1 and Fn-2 are variables used to hold the previous 2 Fibonacci sequence
    // F0 = 0, F1 = 1
    // These are the first the seed values for determining the remainder of the sequence
    int fn_1 = 1;
    int fn_2 = 0;

    // Two additional variables are used to store store intermediate values of Fn_1 and Fn_2
    int fn_1_new;
    int fn_2_new;

    // A variable n is used to keep track of where in the Fibonacci sequence is being computed
    // This starts at 2
    int n = 2;

    // The first two Fibonacci values can be printed
    printf( "%d\n", fn_2 );
    printf( "%d\n", fn_1 );

    // Loop until the number of Fibonacci numbers to be printed
    while ( n < NUM_FIB ) {
        // The next Fibonacci number is the sum of the previous 2 Fibonacci numbers
        // Print this value
        printf( "%d\n", (fn_2 + fn_1) );

        // Update Fn-2 and Fn-1 and assign these to the correct variable
        fn_2_new = fn_1;
        fn_1_new = fn_2 + fn_1;
        fn_1 = fn_1_new;
        fn_2 = fn_2_new;

        // Increment the Fibonacci count variable n
        n++;
    }

    // Return 0
    return 0;
}
