#include <stdio.h>
#include "draw.h"

int main() 
{
  puts("Welcome!\n");

  while (1) { // Infinite while loop

    puts("Select which shape you want to print (Triangle = t, Square = s, Chars = c) or 'q' to quit.\n");
    int c;
    while ((c = getchar()) == '\n'); /* ignore newlines */
    if (c == EOF)
      goto done;

    // Given the user answer, select which method to call
    switch (c) {
    case 't':
      puts("You selected triangle:\n");
      print_triangle(5, 7);
      break;
    case 's':
      puts("You selected square:\n");
      print_square(5, 5);
      break;
    case 'c':
      puts("You selected chars:\n");
      for (char c = 'A'; c < 'D'; c++)
	print_char_11x16(c);
      break;
    case 'q':
      puts("Bye!\n");
      goto done; // Goes to the "exit" label
    case '\n':
      break;
    default:
      puts("Incorrect option, please try again!\n");
    }
  }

 done: // To exit from program
  return 0;
}
