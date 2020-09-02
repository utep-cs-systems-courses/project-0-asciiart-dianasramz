#include <stdio.h>
#include "draw.h"

int main() {
    char userAns;

    printf("Welcome!\n");

    while (1) { // Infinite while loop

        printf("Select which shape you want to print (Triangle = t, Square = s, Arrow = a) or 'q' to quit.\n");
        scanf(" %c", &userAns);

        // Given the user answer, select which method to call
        switch (userAns) {
            case 't':
                printf("You selected triangle:\n");
                print_triangle(7,'*');
                break;
            case 's':
                printf("You selected square:\n");
                print_rectangle(5, 5, '*');
                break;
            case 'a':
                printf("You selected arrow:\n");
                // Your code here
                break;
            case 'q':
                printf("Bye!\n");
                goto exit; // Goes to the "exit" label
            default:
                printf("Incorrect option, please try again!\n");
        }
    }

    exit: // To exit from program
    return 0;
}
