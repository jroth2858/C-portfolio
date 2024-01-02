#include <stdio.h>
#include <string.h>
#include "colors.h"

// This challenge packs bits into a structure to demonstrate efficient memory usage.
//  Here we define a box that has the following attributes
//  - Transparency
//  - Fill color
//  - Stroke color
//  - Stroke style

//RGB color is represented where MSB is blue and LSB is red.
// Black is no colors
// Yellow := blue + green
// Magenta := red + blue
// Cyan := blue + green
// White := all colors

//Border style convention:
// 0 := solid
// 1 := dotted
// 2 := dashed

// Depiction of structure:
// |      |      |      |      |      |      |      |      |
// +------+------+------+------+------+------+------+------+
// |opaque|    fill color      |        ppadding           | <--------  Fill
// +------+-------------+------+------+--------------------+
// |   stroke color     | stroke style|      padding       | <--------  Stroke
// +--------------------+-------------+--------------------+

// Note that we are adding padding in order to byte-align the struct in memory.

struct square {
    unsigned int opaque : 1;
    unsigned int fill_color : 3;
    unsigned int : 4; //padding 
    unsigned int border_color : 3;
    unsigned int stroke_style : 2;
    unsigned int : 3;
};

void print_attributes(struct square *ptr);
void set_attributes(int argc, char *argv[], struct square *ptr);

int main(int argc, char *argv[]){
    struct square mysquare = {1, BLACK, BLACK, SOLID};
    printf("\n******* Original Properties ********\n");
    print_attributes(&mysquare);
    if (argc > 1)
        set_attributes(argc, argv, &mysquare);
    printf("\n******* Final Properties ********\n");
    print_attributes(&mysquare);
}

void print_attributes(struct square *ptr){
    printf("Square properties:\n");
    printf("------------------\n");
    ptr->opaque == 1 ? printf("\tTransparent: \tNo\n") : printf("\tTransparent: \tYes\n");
    printf("\tFill color:\t%s\n", colors[ptr->fill_color]);
    printf("\tBorder color:\t%s\n", colors[ptr->border_color]);
    printf("\tBorder style:\t%s\n", stroke[ptr->stroke_style]);

    return ;
}

void set_attributes(int argc, char *argv[], struct square *ptr){
    for(int i=1; i < argc; i++){ //Cycle through command line input
        if ((i==1) && (strcmp(argv[i], "transparent")==0)) ptr->opaque=0; //First argument sets the transparency

        else if ((i==2 || i==3)){   //Second and third arguments set the fill and stroke color respectively
            for(int j=0; j < 8; j++){
                if (strcmp(argv[i], colors[j]) == 0){
                    if (i == 2) ptr->fill_color=j;
                    else ptr->border_color=j;
                }
            }
        }

        else if (i==4) { //Fourth argument sets the stroke style
            for(int j=0; j < 3; j++)
                if (strcmp(argv[i], stroke[j])==0) ptr->stroke_style=j;
        }

    }
    return ;
}