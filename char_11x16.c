#include "draw.h"		/* for font */
#include "stdio.h"		/* for putchar */

void print_char_11x16(char c)
{
  c -= 0x20;
  for (char row = 0; row < 11; row++) {
    unsigned short rowBits = font_11x16[c][row];
    while (rowBits) {
      putchar((rowBits & 0x8000) ? '*' : ' ');
      rowBits <<= 1;
    }
    putchar('\n');
  }
}
