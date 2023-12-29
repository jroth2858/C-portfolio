#include <stdio.h>
#include "challenge_1_helper.h" //including this ensures consistency in the far_away_function signature

void far_away_function(void){
    extern float everyonesvar;
    printf("In a function in a differnet source file we can still access the nonstatic global, value: %.2f\n", everyonesvar);
}