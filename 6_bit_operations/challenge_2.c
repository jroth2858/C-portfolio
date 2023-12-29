#include <stdio.h>
#include <stdbool.h>

static bool is_bit_set(int x, int n){
    int mask = 1;
    mask = mask << n;
    
    return (mask & x) == mask;
}


static int set_bit(int x, int n){
    int mask = 1;
    mask = mask << n;

    return x | mask;
}


int main(){
    int x, n;

    printf("Enter the value for manipulation:");
    scanf("%d", &x);

    printf("Enter the bit position to check and set:");
    scanf("%d", &n);

    printf("The number entered was: %d\n", x);
    if (is_bit_set(x, n))
        printf("The bit is set.\n");
    else
        printf("The bit is not set.\n");

    x = set_bit(x, n);
    printf("After setting the bit the number is: %d\n", x);

    return 0;
}