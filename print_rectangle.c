#include <stdio.h>
#include "draw.h"

/* Prints a rectangle given a width and height along with a character
 * of what the shape will be composed */
void print_rectangle(int width, int height, char drawChar){
    int i, j;
    // Simple 2D loop that draws directly the square
    for (i =0; i < height; i++){
        // HINT: an offset could be "printed" here
        for (j =0; j < width; j++)
            printf("%c  ", drawChar);
        printf("\n");
    }
}