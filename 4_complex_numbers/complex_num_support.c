#include <stdio.h>

int main(){
    #ifdef __STDC_NO_COMPLEX__
    printf("Complex math is not supprted.\n");
    #else
    printf("Complex math is supported.\n");
    #endif
}