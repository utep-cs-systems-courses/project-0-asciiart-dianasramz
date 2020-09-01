#include <stdio.h>
#include "draw.h"

int main() {
    char userAns, drawChar;
    int width;

    printf("Welcome!\n");

    while (1) {
        printf("Select which shape you want to print (Triangle = t, Square = s, Arrow = a) or 'q' to quit.\n");
        scanf("%c", &userAns);
        switch (userAns) {
            case 't':
                printf("You selected triangle:\n");
                printf("Please input the width followed by the character you want to draw\n"
                       "(i.e. 5 a, this will print a triangle of width 5 made of a's).\n");
                scanf("%d %c", &width, &drawChar);
                print_triangle(width, drawChar);
                break;

            case 's':
                printf("You selected square:\n");
                printf("Please input the width followed by the character you want to draw\n"
                       "(i.e. 5 a, this will print a square of width 5 made of a's).\n");
                scanf("%d %c", &width, &drawChar);
                print_square(width, drawChar);
                break;

            case 'a':
                printf("You selected arrow:\n");
                // Your code here
                break;

            case 'q':
                printf("Bye!\n");
                goto exit;
            default:
                printf("Incorrect option, please try again!\n");
        }
    }

    exit: // To exit from program
    return 0;
}
