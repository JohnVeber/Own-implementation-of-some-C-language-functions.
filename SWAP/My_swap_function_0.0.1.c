/* My_swap_function_0.0.1.c*/
/* This program is my first attempt to realise swap function in C */
/* The function works for integers only at this version of program */

#include <stdio.h>

void swap_i (int, int); // Function declaration

int main (void)
{
    int a = 21;
    int b = 17;
    
    swap_i(a, b); // Function call
    printf("main: a = %d, b = %d\n", a, b);
    return 0;
}
void swap_i(int c, int d) // Function definition
{
    int t = c;
    c = d;
    d = t;
    printf("swap_i: a = %d, b = %d\n", c, d);
}
/* The program output demonstrates passing arguments by value: 
variables at the "main" function were not swapped.*/