#include <stdio.h>
#include "draw.h"

/* Prints a rectangle given a width and height along with a character
 * of what the shape will be composed */
void print_square(int startCol, int size)
{
  int i, j;
  int endCol = startCol + size;
  for (int row = 0; row < size; row++){
    int col;
    for (col = 0; col < startCol; col++) putchar(' ');
    for (       ; col < endCol; col++) putchar('*');
    putchar('\n');
  }
}
