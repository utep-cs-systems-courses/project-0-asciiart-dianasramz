#include <stdio.h>
#include "draw.h"

void draw_bitmap(int height, int width,  int bitmap[height][width], char drawChar) {
    int i, j;
    for (i = 0; i < height; i++) {
        for (j = 0; j < width; j++) {
            if (bitmap[i][j]) printf("%c  ", drawChar);
            else printf("   ");
        }
        printf("\n");
    }
}

void print_square(int width, char drawChar){
    int i, j;

    for (i =0; i < width; i++){
        // HINT: an offset could be "printed" here
        for (j =0; j < width; j++)
            printf("%c  ", drawChar);
        printf("\n");
    }
}

void print_triangle(int width,char drawChar){
    int i, j, middle = (width >> 1);
    int middle_i = middle + 1;
    int bitmap[middle + 1][width];

    for (i = 0; i < middle + 1; i++) {
        for (j = 0; j < width; j++) bitmap[i][j] = 0;
        for (j = 0; j < middle_i; j++) {
            bitmap[i][middle - j] = 1;
            bitmap[i][middle + j] = 1;
        }
        middle_i--;
    }

    draw_bitmap(middle + 1, width, bitmap, drawChar);

}
