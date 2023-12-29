// User inputs some number of ints, store them in a VLA and print their sum
// This challenge specifically exercises use of variable length arrays, but there are obvious problems (e.g., stack overflow) with them.
#include <stdio.h>
#include <stdlib.h> //For atoi

int main(int argc, char *argv[]){ //utilize argc & argv for the purpose of reading in user-defined information
    if (argc==1) //Graceful exit if the user doesn't define any input.
        exit(0);
    
    int total = 0;
    int arr[argc]; // VLA

    for(int i=1; i< argc; i++){
        arr[i] = atoi(argv[i]);
        total += arr[i]; // create a running sum of the array
    }
    printf("%d\n", total);
}