#include <stdio.h>
// #define stderr

int mystrlen(char *arr){
    int i = 0;
    while (*(arr + i) != '\0')
        i++;
    return i;
}

int main(void){
    char *string = "ljkfd_!\nshg"; // Escape sequience counts as 1 character
    
    printf ("There are %d characters in this row.\n\n", mystrlen(string));
    return 0;
}
