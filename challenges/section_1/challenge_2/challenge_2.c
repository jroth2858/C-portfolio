#include <stdio.h>

static int x = 0; //could get rid of this line and just define below as static int

int sum(int num){
    // Tells the compiler that there is a function external to the scope available called x
    extern int x; //could also define this JUST here as static int 

    x += num;

    return x;
}

int main(){
    printf("%d\n", sum(25)); //Prints 25
    printf("%d\n", sum(15)); //Prints 40
    printf("%d\n", sum(30)); //Prints 70

    return 0;
}