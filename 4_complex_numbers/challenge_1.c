#include <stdio.h>
#include <complex.h>
#include <math.h>

int main(){
    float complex x = 1.0 + 1.0I;
    float complex y;

    y = x * x;
    printf("%.2f + %.2f i\n", creal(y), cimag(y));

    y = cpow(x, 2);
    printf("%.2f + %.2f i\n", creal(y), cimag(y));

    y = conj(x);
    printf("%.2f + %.2f i\n", creal(y), cimag(y));

    return 0;
}