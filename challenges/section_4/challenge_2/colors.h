#ifndef COLORS_H
#define COLORS_H 

// Color definitions (see challenge_2.c comments)
#define BLACK 0
#define RED 1
#define GREEN 2
#define BLUE 4
#define YELLOW RED|GREEN 
#define MAGENTA RED|BLUE 
#define CYAN BLUE|GREEN
#define WHITE RED|GREEN|BLUE

const char* colors[8] = {"black", "red", "green", "yellow", "blue", "magenta", "cyan", "white"}; //indices correspond to color definitions

// Stroke style definitions (see challenge_2.c comments)
#define SOLID 0
#define DOTTED 1
#define DASHED 2

const char* stroke[3] = {"solid", "dotted", "dashed"}; //indices correspond to definitions

#endif