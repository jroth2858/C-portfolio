#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

//Check for complex number support by the compiler
#ifdef __STDC_NO_COMPLEX__
#error Complex numbers are not supported by this compiler.
#else
#include<complex.h>
#endif

//The goal of this problem is to demonstrate complex numbers.
//Here we depart a little from the prescribed challenge in order to demonstrate some beautiful complex number properties.

int main(){
    const double pi = M_PI; //Alias math.h's name for pi to something a little nicer
    complex double euler, demoivre1, demoivre2;

    //Euler's Identity
    //The below for loop shows that as the complex exponential rotates around the unit circle
    //  the result is always -1 when the rotation amount in radians is of the form (2n+1)*pi.
    for(int k = 1; k < 9; k += 2){
        euler = cexp(I*pi*k) + 1; //Per Euler's Identity this number will always be zero.
        printf("Euler's identity: %1.f\n", creal(euler));
    }

    //Demoivre's Theorem
    //This theorem assures us that the rules of exponentiation also relate to complex numbers
    //Demoivre's Theorem is typically written with the exponent expanded into a sine and cosine term via
    //      e^(jx) = cos(x) + jsin(x)
    srand(time(NULL)); //Initialize random number generator seed for high-quality randomness
    for(int k = 0; k < 4; k++){
        int x = rand() % 10;
        int y = rand() % 10;
        double theta = pi/3;
        
        demoivre1 = cpow(x*cos(theta) + x*I*sin(theta), y);
        demoivre2 = pow(x, y)*(cos(y*theta) + I*sin(y*theta));
        if(cabs(demoivre1 - demoivre2) < 0.01) //Check for equality with allowance for floating point error
            printf("Equal!\n");
        else
            printf("Not equal. Difference: %.2f\n", cabs(demoivre1 - demoivre2));
    }
}