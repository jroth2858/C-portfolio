#include <stdio.h>

// Demonstrates the transformations specified by the function prototypes only using 
//  bitwise operations.

int twos_complement(int);
int lower_case(int);
int next_pow_2(int);

int main(int argc, char * argv[]){
    int x = 67;
    int next_x, neg_x;
    char char_x;

    neg_x = twos_complement(x);
    printf("The 2s complement of %d is %d\n", x, neg_x);

    char_x = (char)lower_case(x);
    printf("The lower case of %c is %c\n", x, char_x);
    printf("The lower case of %c is %c\n", char_x, (char)lower_case(char_x));

    next_x = next_pow_2(x);
    printf("The next power of two greater than or equal to %d is %d\n", x, next_x);
    
}

int twos_complement(int x){
    x = ~x; //flip all of the bits
    x += 1; // then add one
    printf("%d\n", x);

    return x;
}

int lower_case(int x){
    int u = 32; //Mask for the bit in the 2^5=32 place. For ASCII characters this bit is 0 for upper case and 1 for lower case.
    
    return u | x; //Bitwise OR ensures the subject bit is always set (i.e., lower case).
}

int next_pow_2(int x){
    int count = 0;

    x--; //Ensures that if x is already a power of 2 it returns that number.

    //The strategy is to divide by 2 with a right bit shift until the most 
    //  significant bit is in the 2^0 place. Then shift left that many times
    //  plus 1 to get the next power of 2 greater than the previous value.
    while(x > 1){
        x >>= 1; //Divide by 2 and discard the remainder
        count ++; //Count how many times we shift right
    }

    x <<= count + 1;

    return x;
}