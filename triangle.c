#include "draw.h"
#include "stdio.h"

/* Prints a triangle given a width and a character that will compose the shape */
void print_triangle(int startCol, int size)
{
  for(int row = 0; row <= size; row++) {
    int minCol = startCol + size - row, maxCol = startCol + size + row;
    int col;
    for (col = 0; col < minCol; col++) putchar(' ');
    for (       ; col <= maxCol; col++) putchar('*');
    putchar('\n');
  }
}

