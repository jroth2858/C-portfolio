#include <stdio.h>

extern int counter; //Tell the compiler about the global counter

void display(void){
    printf("Inside of display the value of counter+1 is: %d\n", counter+1);
}