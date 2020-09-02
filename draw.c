#include <stdio.h>
#include "draw.h"

/* Gets a bitmap of dimensions width*height and a character drawChar
 * of what the shape will be composed */
void draw_bitmap(int width, int height,  int bitmap[height][width], char drawChar) {
    int i, j;
    for (i = 0; i < height; i++) {
        for (j = 0; j < width; j++) {
            if (bitmap[i][j]) printf("%c  ", drawChar);
            else printf("   ");
        }
        printf("\n");
    }
}
