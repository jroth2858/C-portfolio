#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]){
    unsigned int x = atoi(argv[1]);

    x--; //Prevents errors when you are already on a power of 2

    //Sets all of the bits less than or equal to the current most significant bit set in x
    for(int i=0; i< sizeof(x)*8; i++)
        x |= x >> (int)pow(2, i);

    x++; //Get the next power of 2

    printf("%d\n", x);
}