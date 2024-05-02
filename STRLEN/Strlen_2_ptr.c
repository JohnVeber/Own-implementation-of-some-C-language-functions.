// Refactoring function Strlen_1 with 2 pointers
// Using sizeof function
#include <stdio.h>

int mystrlen(char *arr){
    int i = 0;
    char *start = arr;
    while (*(arr + i) != '\0')
        i++;
    return ((arr + i) - start);
}

int main(void){
    char *string = "ljkfd0-shg";
    printf ("There are %d characters in this row.\n\n", mystrlen(string));
    return 0;
}

// Correct answer - 10 characters.