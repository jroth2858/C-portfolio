#include <stdio.h>
#include <stdlib.h>

struct myArray{
    int length;
    int array[];
};

int main(){
    int desiredSize = 0;
    struct myArray *ptr;
    struct myArray x;

    scanf("%d", &desiredSize);
    ptr = malloc(sizeof(struct myArray) + desiredSize * sizeof(int));

    ptr->length = desiredSize;
    for(int i=0; i<desiredSize; i++){
        ptr->array[i] = 7;
        printf("%d\n", ptr->array[i]);
    }

    return(0);
}