#include "draw.h"

/* Prints a triangle given a width and a character that will compose the shape */
void print_triangle(int width, char drawChar){
    int i, j, middle = (width >> 1);
    int middle_i = middle + 1; // temporary variable to know how many characters must be printed
    int bitmap[middle + 1][width];

    for (i = 0; i < middle + 1; i++) {
        for (j = 0; j < width; j++) bitmap[i][j] = 0;
        for (j = 0; j < middle_i; j++) {
            bitmap[i][middle - j] = 1;
            bitmap[i][middle + j] = 1;
        }
        middle_i--;
    }

    draw_bitmap(width, middle + 1, bitmap, drawChar);
}