#include <setjmp.h>
#include <stdio.h>
#include <stdlib.h>

jmp_buf buf;

void next_func(void);
void last_func(void);

int main(){
    printf("In main.\n");
    if(setjmp(buf)) exit(0);
    printf("further in main\n");
    next_func();
}

void next_func(void){
    printf("In next func.\n");
    last_func();
    printf("Back in next func.\n");
}

void last_func(void){
    printf("In last func.\n");
    longjmp(buf, 1);
}