#include <setjmp.h>
#include <stdio.h>
#include <stdlib.h>

jmp_buf buf;

void error_recovery(void);

int main(){
    while (1){
        if (setjmp(buf)==1){
            printf("In main()\n");
            break;
        }
        else
            error_recovery();
    }

    return 0;

}

void error_recovery(){
    printf("ERROR\n");
    longjmp(buf, 1);
}