/* This function counts a number of character occurrences in a string using pointer arithmetic. */
#include<stdio.h>

int foo(char *array, char ref);

int main(void){
    char *str = "a;fkdhjprmndd";
    char reference = 'd';

    int result = foo(str, reference);
    if(result == 3)
        printf("Test complete");
        else
        printf("Test failed");
      
    printf("\n\n\n");
    return 0;
}

int foo(char *array, char ref){ 
    int counter;
    int i; 
    for(int i = 0; *(array + i) != '\0'; i++){
        if(*(array + i) == ref)
            counter++;
    }
    return counter;
}
