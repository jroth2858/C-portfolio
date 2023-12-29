//Variable array members inside a structure
//Create a structure named "myArray" that has a length member and a flexible array member named "array"
//Read in from the user the size of the array at runtime and allocate memory
//Set and fill length and array member then print elements

#include <stdio.h> 
#include <stdlib.h>
#include "challenge_2.h"

int main(int argc, char *argv[]){
    struct myArray *ptr;
    size_t needed_space = sizeof(struct myArray) + argc*sizeof(int);

    ptr = malloc(needed_space);
    if (ptr == NULL) { //Verify successful memory allocation
        fprintf(stderr, "Memory allocation failed\n");
        return 1;
    }

    ptr->length = argc - 1;
    printf("The length of the flexible array member is: %d\n", ptr->length);
    for(int i=0; i < ptr->length; i++){
        ptr->array[i] = atoi(argv[i+1]);
        printf("The value of element %d is: %d\n", i, ptr->array[i]);
    }

    free(ptr);

    return 0;
}