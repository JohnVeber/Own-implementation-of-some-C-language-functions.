/* This function converts characters in a string to uppercase. */
#include<stdio.h>

int main(void){

    char *initial_string = "skfDJldjlDliw7)dn?!dllz";
    char *new_string;

    int current;
    int i = 0;

    for(int i = 0; *(initial_string + i) != '\0'; i++){
        current = *(initial_string + i);
        if(current >= 'a' && current <= 'z'){
            *(new_string + i) = &current;
        }
        else{
            *(new_string + i) = &current;
        }

    }
    printf("%s", new_string);
}

/* IN PROGRESS */
