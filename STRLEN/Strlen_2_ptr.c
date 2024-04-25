// Refactoring function Strlen_1 with 2 pointers
// Using sizeof function
#include <stdio.h>

int mystrlen(char *arr, char *finish){
    int i = 0;
    while (arr[i] != finish[i])
        i++;
    return i;
}

int main(void){
    char *string = "ljkfd0-shg";
    char *end = (&string + sizeof(string)); // pointer for the last array element
    printf ("There are %d characters in this row.\n\n", mystrlen(string, end));
    return 0;
}
