/*goto statements are really only appropriate to use
when breaking out of multiple sets of nested loops
at once. This challenge is for demo purposes only.

Simulated a nested looping structure to build a christmas 
tree of asterisks.
*/

#include <stdio.h>

void using_for_loops(void);

int main(void){
    using_for_loops(); //prototype for doing the challenge the right way with for loops

    int counter1 = 5; //layer counter (counts down)
    int counter2 = 10; //space counter (counts down)
    int counter3 = 1; //astrisk counter (counts up)

FIND_INIT_LAYER:
    if (counter1 == 5)
        goto INIT_LAYER1;
    else if (counter1 == 4)
        goto INIT_LAYER2;
    else if (counter1 == 3)
        goto INIT_LAYER3;
    else if (counter1 == 2)
        goto INIT_LAYER4;
    else if (counter1 == 1)
        goto INIT_LAYER5;
    else
        goto END;

SPACE: 
    printf("%c", ' ');
    counter2--;
    goto LAYER;
AST: 
    printf("%c", '*');
    counter3++;
    goto LAYER;
NEW: 
    printf("%s", "\n");
    counter1--;
    goto FIND_INIT_LAYER;

INIT_LAYER1:
    counter2 = 10; //space counter (counts down)
    counter3 = 1; //astrisk counter (counts up)
    goto LAYER;

INIT_LAYER2:
    counter2 = 9;
    counter3 = 1;
    goto LAYER;

INIT_LAYER3:
    counter2 = 8;
    counter3 = 1;
    goto LAYER;

INIT_LAYER4:
    counter2 = 7;
    counter3 = 1;
    goto LAYER;

INIT_LAYER5:
    counter2 = 6;
    counter3 = 1;
    goto LAYER;

LAYER:
    if (counter2 > 0)
        goto SPACE;
    if (counter3 <= 2*(5-counter1)+1)
        goto AST;
    goto NEW;

END:
    return 0;    
}

void using_for_loops(void){
    int base_n = 9;

    for(int i=0; i<5; i++) //rows
    {
        for(int j=0; j<10-i; j++)
            printf("%c", ' ');

        for(int k=0; k<2*i+1; k++)
            printf("%c", '*');
        
        printf("%s", "\n");
    }
}