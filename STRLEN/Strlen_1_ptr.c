#include <stdio.h>

size_t mystrlen(const char *arr){
    size_t i = 0;
    while (*arr != '\0'){
        ++i;
        ++arr;
    }
    return i;
}

int main(void){
    const char *string = "ljkfd_!\nshg"; // Escape sequience counts as 1 character
    
    //printf ("There are %ld characters in this row.\n\n", mystrlen(string));
    fprintf (stderr, "There are %ld characters in this row.\n\n", mystrlen(string));

    return 0;
}
