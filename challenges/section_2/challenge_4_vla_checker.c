#include <stdio.h>

int main(){
    #ifdef __STDC_NO_VLA__
    printf("Variable length arrays are not supported.\n");
    exit(1);
    #endif
    printf("Variable length arrays are supported.\n");

    return 0;
}

