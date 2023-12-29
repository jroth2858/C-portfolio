#include <stdio.h>
#include <time.h>
#include "challenge_1_helper.h"

static int myvar = 314; //This will only be accessible inside of this file
float everyonesvar = 3.14; //This will be accessible in all translation units to the compiler

//Function prototypes to avoid implicit prototyping
void permanent_var_example(void);
static void my_func(void);

int main(){
    int x = 10;
    {
        int x = 5;
        printf("The value inside the block scope of x is: %d\n", x);
    }
    printf("The value outside the block scop of x is: %d\n", x);

    extern int myvar; //This would be cleaner at right after the function signature but put here to emphasize usage
    printf("The global is set to be static so it is accessible inside all of this file. For instance in main its value is: %d\n", myvar);
    my_func();
    
    printf("Now for global nonstatic variables we can access them inside of the translation unit defining it. Value: %.2f\n", everyonesvar);
    far_away_function();

    printf("Register variables are very fast. Let's look at how long a big for loop takes with a auto variable...\n");
    clock_t start_time = clock();
    for(int i=0; i<100000000; i++){
        x += x;
    }
    clock_t end_time = clock();
    double elapsed_time = (double)(end_time - start_time) / CLOCKS_PER_SEC;
    printf("Auto variable for loop took %.6f seconds\n", elapsed_time);

    register int y = 10;
    start_time = clock();
    for(register int i=0; i<100000000; i++){
        y += y;
    }
    end_time = clock();
    elapsed_time = (double)(end_time - start_time) / CLOCKS_PER_SEC;
    printf("Register variable for loop took %.6f seconds\n", elapsed_time); //They're surprisingly close

    permanent_var_example();
    permanent_var_example();

    return 0;
}

static void my_func(){ //This function is only available within this translation unit due to the static qualifier
    printf("Inside a nexted function we can still get the value of the global here: %d\n", myvar);
}

void permanent_var_example(){
    static int perm = 11;
    printf("The value this time through is as initialized: %d\n", perm); //The second time through it will be 12 due to the static declaration
    perm += 1;
}