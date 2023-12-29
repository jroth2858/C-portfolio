#include <stdio.h>
//Further include files are specifically not to be used. This challenge is a little redundant with the implementation of Challenge 1.

void display(void); //function prototype for linked function in display.c. This should really be done with a header file, but its implemented this way to satisfy course instructions.

int counter; //global nonstatic loop counter, per the instructions.

int main(){
    for(counter=5; counter > 0; counter--){ //Note that declaration of counter inside the for loop isn't necessary since it is a global varaiable.
        printf("Inside main the value of counter is: %d\n", counter);
        display();
    }

    return 0;
}